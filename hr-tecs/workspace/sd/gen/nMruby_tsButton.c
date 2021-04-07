/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port: cTECS signature: sButton context:task
 *   bool_t         cTECS_isPressed( button_t button );
 *
 * #[</PREAMBLE>]# */

/* �ץ��ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "nMruby_tsButton_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* MBP: MrubyBridgePlugin: MBP000 */
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "TECSPointer.h"
#include "TECSStruct.h"

#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

#ifndef NULL
#define NULL 0
#endif
extern nMruby_tsButton_CB  rDomainEV3_BridgeButton_INIB;

/* RData MBP001 */
static void 
tsButton_free( mrb_state *mrb, void *p )
{
	if( p )
		(void)mrb_free( mrb, p );
}

/* RData MBP002 */
struct mrb_data_type data_type_tsButton =
{
	"tsButton",
	tsButton_free
};

/* RData MBP003 */
struct tecs_tsButton {
    CELLCB  *cbp;
};

/* name_to_cbp MBP010 */
const struct name_to_cbp_tsButton {
    char   *name;    /* Cell Name */
    CELLCB *cbp;
} Name_to_cbp_tsButton[] = {
	{ "BridgeButton", &rDomainEV3_BridgeButton_INIB },
	{ 0, 0 },
};


/* MBP100 */
mrb_value
MrubyBridge_tsButton_initialize( mrb_state *mrb, mrb_value self)
{
	mrb_value	name;
	struct tecs_tsButton *tecs_cb;
	const struct name_to_cbp_tsButton *ntc;

	/* set DATA_TYPE earlier to avoid SEGV */
	DATA_TYPE( self ) = &data_type_tsButton;

	mrb_get_args(mrb, "o", &name );
	if( mrb_type( name ) != MRB_TT_STRING ){
		mrb_raise(mrb, E_NAME_ERROR, "cell name not string");
	}
	for( ntc = &Name_to_cbp_tsButton[0]; ntc->name != NULL; ntc++ ){
		if( strcmp( ntc->name, RSTRING_PTR( name ) ) == 0 )
			break;
	}
	if( ntc->name == 0 ){
		mrb_raise(mrb, E_ARGUMENT_ERROR, "cell not found");
	}
	tecs_cb = (struct tecs_tsButton *)mrb_malloc(mrb, sizeof(struct tecs_tsButton) );
	tecs_cb->cbp = ntc->cbp;
	DATA_PTR( self ) = (void *)tecs_cb;

	return self;
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsButton_isPressed( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsButton *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	bool_t	ret_val;
	mrb_int	mrb_button;
	button_t	button;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "i", &mrb_button );
	/* convert mrb to C (MBP112) */
	VALCHECK_Long( mrb, mrb_button );
	button = (button_t)mrb_button;
	/* calling target (MBP120) */
	ret_val = cTECS_isPressed( button );
	/* return (MBP130) */
	return ret_val ? mrb_true_value() : mrb_false_value();
}
/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/