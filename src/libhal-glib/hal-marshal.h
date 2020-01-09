
#ifndef __hal_marshal_MARSHAL_H__
#define __hal_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* NONE:INT,BOXED (hal-marshal.list:1) */
extern void hal_marshal_VOID__INT_BOXED (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);
#define hal_marshal_NONE__INT_BOXED	hal_marshal_VOID__INT_BOXED

/* NONE:STRING,STRING (hal-marshal.list:2) */
extern void hal_marshal_VOID__STRING_STRING (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);
#define hal_marshal_NONE__STRING_STRING	hal_marshal_VOID__STRING_STRING

/* NONE:STRING,STRING,STRING (hal-marshal.list:3) */
extern void hal_marshal_VOID__STRING_STRING_STRING (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);
#define hal_marshal_NONE__STRING_STRING_STRING	hal_marshal_VOID__STRING_STRING_STRING

/* NONE:STRING,BOOLEAN (hal-marshal.list:4) */
extern void hal_marshal_VOID__STRING_BOOLEAN (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);
#define hal_marshal_NONE__STRING_BOOLEAN	hal_marshal_VOID__STRING_BOOLEAN

/* NONE:STRING,STRING,BOOLEAN (hal-marshal.list:5) */
extern void hal_marshal_VOID__STRING_STRING_BOOLEAN (GClosure     *closure,
                                                     GValue       *return_value,
                                                     guint         n_param_values,
                                                     const GValue *param_values,
                                                     gpointer      invocation_hint,
                                                     gpointer      marshal_data);
#define hal_marshal_NONE__STRING_STRING_BOOLEAN	hal_marshal_VOID__STRING_STRING_BOOLEAN

/* NONE:STRING,BOOLEAN,BOOLEAN,BOOLEAN (hal-marshal.list:6) */
extern void hal_marshal_VOID__STRING_BOOLEAN_BOOLEAN_BOOLEAN (GClosure     *closure,
                                                              GValue       *return_value,
                                                              guint         n_param_values,
                                                              const GValue *param_values,
                                                              gpointer      invocation_hint,
                                                              gpointer      marshal_data);
#define hal_marshal_NONE__STRING_BOOLEAN_BOOLEAN_BOOLEAN	hal_marshal_VOID__STRING_BOOLEAN_BOOLEAN_BOOLEAN

/* NONE:INT (hal-marshal.list:7) */
#define hal_marshal_VOID__INT	g_cclosure_marshal_VOID__INT
#define hal_marshal_NONE__INT	hal_marshal_VOID__INT

/* NONE:STRING (hal-marshal.list:8) */
#define hal_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING
#define hal_marshal_NONE__STRING	hal_marshal_VOID__STRING

/* NONE:INT,LONG,BOOLEAN,BOOLEAN (hal-marshal.list:9) */
extern void hal_marshal_VOID__INT_LONG_BOOLEAN_BOOLEAN (GClosure     *closure,
                                                        GValue       *return_value,
                                                        guint         n_param_values,
                                                        const GValue *param_values,
                                                        gpointer      invocation_hint,
                                                        gpointer      marshal_data);
#define hal_marshal_NONE__INT_LONG_BOOLEAN_BOOLEAN	hal_marshal_VOID__INT_LONG_BOOLEAN_BOOLEAN

G_END_DECLS

#endif /* __hal_marshal_MARSHAL_H__ */

