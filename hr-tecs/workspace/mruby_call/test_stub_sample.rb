class Shimo
	def initialize
    	@lcd = EV3RT::LCD.new
	end
	
	def mcall_lcd
		@lcd.print "975917171717"
	end

	def lcd
		@lcd.print "05091997"
	end
end
