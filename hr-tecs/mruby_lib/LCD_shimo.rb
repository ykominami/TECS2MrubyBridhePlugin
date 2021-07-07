
module Ev3dev
  class Screen
    PATH = "/dev/fb0"

    FRAME_BUFFER_SIZE = 3072   # 24 line length * 128 rows
    BLANK_IMAGE = Array.new(FRAME_BUFFER_SIZE){ 0 }.pack("C*")

    attr_accessor :imgs

    def initialize
      raise "couldn't find screen attributes" unless File.exist?(PATH)
      @imgs = []
    end

    def load(image_file)
      raise "couldn't load a image file except .mono format" unless image_file.end_with?('.mono')

      file_size = File.size(image_file)
      raise "file size:#{file_size} is not correct:(#{FRAME_BUFFER_SIZE})" unless file_size == FRAME_BUFFER_SIZE

      @imgs << File.binread(image_file)
    end

    def load_blank
      @imgs << BLANK_IMAGE
    end

    def show
      if @imgs.size >= 2
        File.binwrite(PATH, @imgs.shift)
      else
        File.binwrite(PATH, @imgs.first)
      end
    end

    def show_blank
      File.binwrite(PATH, BLANK_IMAGE)
    end
  end
end
