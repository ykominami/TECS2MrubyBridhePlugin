/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECS2Mruby_tsRyo_TECSGEN_H
#define nTECS2Mruby_tsRyo_TECSGEN_H

/*
 * celltype          :  tsRyo
 * global name       :  nTECS2Mruby_tsRyo
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTECS2MrubyVM_tecsgen.h"
#include "sRyo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECS2Mruby_tsRyo_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  nTECS2Mruby_tsRyo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECS2Mruby_tsRyo_CB_tab           nTECS2Mruby_tsRyo_INIB_tab
#define nTECS2Mruby_tsRyo_SINGLE_CELL_CB   nTECS2Mruby_tsRyo_SINGLE_CELL_INIB
#define nTECS2Mruby_tsRyo_CB               nTECS2Mruby_tsRyo_INIB
#define tag_nTECS2Mruby_tsRyo_CB           tag_nTECS2Mruby_tsRyo_INIB

extern nTECS2Mruby_tsRyo_CB  nTECS2Mruby_tsRyo_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECS2Mruby_tsRyo_INIB *nTECS2Mruby_tsRyo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sRyo */
void         nTECS2Mruby_tsRyo_eEnt_hyoji(nTECS2Mruby_tsRyo_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nTECS2Mruby_tsRyo_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECS2MrubyVM_tecsgen.h"
#ifdef  nTECS2Mruby_tsRyo_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nTECS2Mruby_tsRyo_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECS2Mruby_tsRyo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECS2Mruby_tsRyo_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECS2Mruby_tsRyo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECS2Mruby_tsRyo_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define nTECS2Mruby_tsRyo_cMethodCall_init( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_init( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define nTECS2Mruby_tsRyo_cMethodCall_get_mrb( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_get_mrb( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define nTECS2Mruby_tsRyo_cMethodCall_fin( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_fin( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define nTECS2Mruby_tsRyo_cMethodCall_instance_create( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_instance_create( \
	   &tTECS2MrubyVM_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECS2Mruby_tsRyo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECS2Mruby_tsRyo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECS2Mruby_tsRyo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECS2Mruby_tsRyo_IDX

#define tsRyo_IDX  nTECS2Mruby_tsRyo_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cMethodCall_init( ) \
          ((void)p_cellcb, nTECS2Mruby_tsRyo_cMethodCall_init( p_cellcb ))
#define cMethodCall_get_mrb( ) \
          ((void)p_cellcb, nTECS2Mruby_tsRyo_cMethodCall_get_mrb( p_cellcb ))
#define cMethodCall_fin( ) \
          ((void)p_cellcb, nTECS2Mruby_tsRyo_cMethodCall_fin( p_cellcb ))
#define cMethodCall_instance_create( ) \
          ((void)p_cellcb, nTECS2Mruby_tsRyo_cMethodCall_instance_create( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_hyoji       nTECS2Mruby_tsRyo_eEnt_hyoji

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECS2Mruby_tsRyo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECS2Mruby_tsRyo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECS2Mruby_tsRyo_TECSGENH */
