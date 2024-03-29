/* Caroline.h generated by valac 0.48.19, the Vala compiler, do not modify */

#ifndef __CAROLINE_H__
#define __CAROLINE_H__

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gee.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <cairo-gobject.h>

G_BEGIN_DECLS

#define TYPE_CAROLINE (caroline_get_type ())
#define CAROLINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CAROLINE, Caroline))
#define CAROLINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CAROLINE, CarolineClass))
#define IS_CAROLINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CAROLINE))
#define IS_CAROLINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CAROLINE))
#define CAROLINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CAROLINE, CarolineClass))

typedef struct _Caroline Caroline;
typedef struct _CarolineClass CarolineClass;
typedef struct _CarolinePrivate CarolinePrivate;

#define CAROLINE_TYPE_CHART_COLOR (caroline_chart_color_get_type ())
typedef struct _CarolineChartColor CarolineChartColor;

#define CAROLINE_TYPE_POINT (caroline_point_get_type ())
typedef struct _CarolinePoint CarolinePoint;

#define TYPE_BAR (bar_get_type ())
#define BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BAR, Bar))
#define BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_BAR, BarClass))
#define IS_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BAR))
#define IS_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_BAR))
#define BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BAR, BarClass))

typedef struct _Bar Bar;
typedef struct _BarClass BarClass;
typedef struct _BarPrivate BarPrivate;

#define TYPE_LINE (line_get_type ())
#define LINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LINE, Line))
#define LINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LINE, LineClass))
#define IS_LINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LINE))
#define IS_LINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LINE))
#define LINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LINE, LineClass))

typedef struct _Line Line;
typedef struct _LineClass LineClass;
typedef struct _LinePrivate LinePrivate;

#define TYPE_SCATTER (scatter_get_type ())
#define SCATTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SCATTER, Scatter))
#define SCATTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SCATTER, ScatterClass))
#define IS_SCATTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SCATTER))
#define IS_SCATTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SCATTER))
#define SCATTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SCATTER, ScatterClass))

typedef struct _Scatter Scatter;
typedef struct _ScatterClass ScatterClass;
typedef struct _ScatterPrivate ScatterPrivate;

#define TYPE_LINE_SMOOTH (line_smooth_get_type ())
#define LINE_SMOOTH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LINE_SMOOTH, LineSmooth))
#define LINE_SMOOTH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LINE_SMOOTH, LineSmoothClass))
#define IS_LINE_SMOOTH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LINE_SMOOTH))
#define IS_LINE_SMOOTH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LINE_SMOOTH))
#define LINE_SMOOTH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LINE_SMOOTH, LineSmoothClass))

typedef struct _LineSmooth LineSmooth;
typedef struct _LineSmoothClass LineSmoothClass;
typedef struct _LineSmoothPrivate LineSmoothPrivate;

#define TYPE_PIE (pie_get_type ())
#define PIE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PIE, Pie))
#define PIE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PIE, PieClass))
#define IS_PIE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PIE))
#define IS_PIE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PIE))
#define PIE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PIE, PieClass))

typedef struct _Pie Pie;
typedef struct _PieClass PieClass;
typedef struct _PiePrivate PiePrivate;

struct _CarolineChartColor {
	gdouble r;
	gdouble g;
	gdouble b;
};

struct _CarolinePoint {
	gdouble x;
	gdouble y;
};

struct _Caroline {
	GtkDrawingArea parent_instance;
	CarolinePrivate * priv;
	GeeArrayList* labelXList;
	GeeArrayList* chartColorArray;
	GeeArrayList* pointsArray;
	GeeArrayList* pointsCalculatedArray;
};

struct _CarolineClass {
	GtkDrawingAreaClass parent_class;
};

struct _Bar {
	GTypeInstance parent_instance;
	volatile int ref_count;
	BarPrivate * priv;
};

struct _BarClass {
	GTypeClass parent_class;
	void (*finalize) (Bar *self);
};

struct _Line {
	GTypeInstance parent_instance;
	volatile int ref_count;
	LinePrivate * priv;
};

struct _LineClass {
	GTypeClass parent_class;
	void (*finalize) (Line *self);
};

struct _Scatter {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ScatterPrivate * priv;
};

struct _ScatterClass {
	GTypeClass parent_class;
	void (*finalize) (Scatter *self);
};

struct _LineSmooth {
	GTypeInstance parent_instance;
	volatile int ref_count;
	LineSmoothPrivate * priv;
};

struct _LineSmoothClass {
	GTypeClass parent_class;
	void (*finalize) (LineSmooth *self);
};

struct _Pie {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PiePrivate * priv;
};

struct _PieClass {
	GTypeClass parent_class;
	void (*finalize) (Pie *self);
};

GType caroline_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Caroline, g_object_unref)
GType caroline_chart_color_get_type (void) G_GNUC_CONST;
CarolineChartColor* caroline_chart_color_dup (const CarolineChartColor* self);
void caroline_chart_color_free (CarolineChartColor* self);
GType caroline_point_get_type (void) G_GNUC_CONST;
CarolinePoint* caroline_point_dup (const CarolinePoint* self);
void caroline_point_free (CarolinePoint* self);
Caroline* caroline_new (GPtrArray* dataX,
                        GArray* dataY,
                        GArray* chartTypes,
                        GeeArrayList* chartColorArray,
                        gboolean generateColorsRandom,
                        gboolean generateColorsHue,
                        gboolean scatterPlotLabels);
Caroline* caroline_construct (GType object_type,
                              GPtrArray* dataX,
                              GArray* dataY,
                              GArray* chartTypes,
                              GeeArrayList* chartColorArray,
                              gboolean generateColorsRandom,
                              gboolean generateColorsHue,
                              gboolean scatterPlotLabels);
Caroline* caroline_new_with_colors (GPtrArray* dataX,
                                    GArray* dataY,
                                    GArray* chartTypes,
                                    GeeArrayList* chartColorArray,
                                    gboolean generateColorsRandom,
                                    gboolean generateColorsHue,
                                    gboolean scatterPlotLabels);
Caroline* caroline_construct_with_colors (GType object_type,
                                          GPtrArray* dataX,
                                          GArray* dataY,
                                          GArray* chartTypes,
                                          GeeArrayList* chartColorArray,
                                          gboolean generateColorsRandom,
                                          gboolean generateColorsHue,
                                          gboolean scatterPlotLabels);
Caroline* caroline_new_without_colors (GPtrArray* dataX,
                                       GArray* dataY,
                                       GArray* chartTypes,
                                       gboolean generateColorsRandom,
                                       gboolean generateColorsHue,
                                       gboolean scatterPlotLabels);
Caroline* caroline_construct_without_colors (GType object_type,
                                             GPtrArray* dataX,
                                             GArray* dataY,
                                             GArray* chartTypes,
                                             gboolean generateColorsRandom,
                                             gboolean generateColorsHue,
                                             gboolean scatterPlotLabels);
void caroline_updateData (Caroline* self,
                          GPtrArray* dataX,
                          GPtrArray* dataY,
                          const gchar* chartType,
                          gboolean generateColorsRandom,
                          gboolean generateColorsHue,
                          gint replaceIndex);
gint caroline_get_width (Caroline* self);
void caroline_set_width (Caroline* self,
                         gint value);
gint caroline_get_height (Caroline* self);
void caroline_set_height (Caroline* self,
                          gint value);
GArray* caroline_get_chartTypes (Caroline* self);
void caroline_set_chartTypes (Caroline* self,
                              GArray* value);
gdouble caroline_get_gap (Caroline* self);
void caroline_set_gap (Caroline* self,
                       gdouble value);
gdouble caroline_get_max (Caroline* self);
void caroline_set_max (Caroline* self,
                       gdouble value);
gdouble caroline_get_min (Caroline* self);
void caroline_set_min (Caroline* self,
                       gdouble value);
gdouble caroline_get_gapPoint (Caroline* self);
void caroline_set_gapPoint (Caroline* self,
                            gdouble value);
gdouble caroline_get_maxPoint (Caroline* self);
void caroline_set_maxPoint (Caroline* self,
                            gdouble value);
gdouble caroline_get_minPoint (Caroline* self);
void caroline_set_minPoint (Caroline* self,
                            gdouble value);
gint caroline_get_chartPadding (Caroline* self);
void caroline_set_chartPadding (Caroline* self,
                                gint value);
gdouble caroline_get_lineThicknessTicks (Caroline* self);
void caroline_set_lineThicknessTicks (Caroline* self,
                                      gdouble value);
gdouble caroline_get_lineThicknessPlane (Caroline* self);
void caroline_set_lineThicknessPlane (Caroline* self,
                                      gdouble value);
gdouble caroline_get_lineThicknessData (Caroline* self);
void caroline_set_lineThicknessData (Caroline* self,
                                     gdouble value);
gdouble caroline_get_spreadY (Caroline* self);
void caroline_set_spreadY (Caroline* self,
                           gdouble value);
gdouble caroline_get_spreadX (Caroline* self);
void caroline_set_spreadX (Caroline* self,
                           gdouble value);
const gchar* caroline_get_dataTypeY (Caroline* self);
void caroline_set_dataTypeY (Caroline* self,
                             const gchar* value);
const gchar* caroline_get_dataTypeX (Caroline* self);
void caroline_set_dataTypeX (Caroline* self,
                             const gchar* value);
gint caroline_get_pieChartXStart (Caroline* self);
void caroline_set_pieChartXStart (Caroline* self,
                                  gint value);
gint caroline_get_pieChartYStart (Caroline* self);
void caroline_set_pieChartYStart (Caroline* self,
                                  gint value);
gint caroline_get_pieChartRadius (Caroline* self);
void caroline_set_pieChartRadius (Caroline* self,
                                  gint value);
gint caroline_get_pieChartYLabelBStart (Caroline* self);
void caroline_set_pieChartYLabelBStart (Caroline* self,
                                        gint value);
gint caroline_get_pieChartYLabelBSpacing (Caroline* self);
void caroline_set_pieChartYLabelBSpacing (Caroline* self,
                                          gint value);
gint caroline_get_pieChartLabelBSize (Caroline* self);
void caroline_set_pieChartLabelBSize (Caroline* self,
                                      gint value);
gint caroline_get_pieChartLabelOffsetX (Caroline* self);
void caroline_set_pieChartLabelOffsetX (Caroline* self,
                                        gint value);
gint caroline_get_pieChartLabelOffsetY (Caroline* self);
void caroline_set_pieChartLabelOffsetY (Caroline* self,
                                        gint value);
gboolean caroline_get_scatterLabels (Caroline* self);
void caroline_set_scatterLabels (Caroline* self,
                                 gboolean value);
gpointer bar_ref (gpointer instance);
void bar_unref (gpointer instance);
GParamSpec* param_spec_bar (const gchar* name,
                            const gchar* nick,
                            const gchar* blurb,
                            GType object_type,
                            GParamFlags flags);
void value_set_bar (GValue* value,
                    gpointer v_object);
void value_take_bar (GValue* value,
                     gpointer v_object);
gpointer value_get_bar (const GValue* value);
GType bar_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Bar, bar_unref)
void bar_drawBarChart (Bar* self,
                       cairo_t* cr,
                       GeeArrayList* pointsArray,
                       gdouble baseline,
                       CarolineChartColor* color);
Bar* bar_new (void);
Bar* bar_construct (GType object_type);
gpointer line_ref (gpointer instance);
void line_unref (gpointer instance);
GParamSpec* param_spec_line (const gchar* name,
                             const gchar* nick,
                             const gchar* blurb,
                             GType object_type,
                             GParamFlags flags);
void value_set_line (GValue* value,
                     gpointer v_object);
void value_take_line (GValue* value,
                      gpointer v_object);
gpointer value_get_line (const GValue* value);
GType line_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Line, line_unref)
void line_drawLineChart (Line* self,
                         cairo_t* cr,
                         GeeArrayList* pointsArray,
                         gdouble baseline,
                         CarolineChartColor* color);
Line* line_new (void);
Line* line_construct (GType object_type);
gpointer scatter_ref (gpointer instance);
void scatter_unref (gpointer instance);
GParamSpec* param_spec_scatter (const gchar* name,
                                const gchar* nick,
                                const gchar* blurb,
                                GType object_type,
                                GParamFlags flags);
void value_set_scatter (GValue* value,
                        gpointer v_object);
void value_take_scatter (GValue* value,
                         gpointer v_object);
gpointer value_get_scatter (const GValue* value);
GType scatter_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Scatter, scatter_unref)
void scatter_drawScatterChart (Scatter* self,
                               cairo_t* cr,
                               GeeArrayList* pointsArrayCalculated,
                               GeeArrayList* pointsArray,
                               gboolean scatterLabels,
                               CarolineChartColor* color);
Scatter* scatter_new (void);
Scatter* scatter_construct (GType object_type);
gpointer line_smooth_ref (gpointer instance);
void line_smooth_unref (gpointer instance);
GParamSpec* param_spec_line_smooth (const gchar* name,
                                    const gchar* nick,
                                    const gchar* blurb,
                                    GType object_type,
                                    GParamFlags flags);
void value_set_line_smooth (GValue* value,
                            gpointer v_object);
void value_take_line_smooth (GValue* value,
                             gpointer v_object);
gpointer value_get_line_smooth (const GValue* value);
GType line_smooth_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (LineSmooth, line_smooth_unref)
void line_smooth_drawLineSmoothChart (LineSmooth* self,
                                      cairo_t* cr,
                                      GeeArrayList* pointsArray,
                                      gdouble baseline,
                                      CarolineChartColor* color);
LineSmooth* line_smooth_new (void);
LineSmooth* line_smooth_construct (GType object_type);
gpointer pie_ref (gpointer instance);
void pie_unref (gpointer instance);
GParamSpec* param_spec_pie (const gchar* name,
                            const gchar* nick,
                            const gchar* blurb,
                            GType object_type,
                            GParamFlags flags);
void value_set_pie (GValue* value,
                    gpointer v_object);
void value_take_pie (GValue* value,
                     gpointer v_object);
gpointer value_get_pie (const GValue* value);
GType pie_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Pie, pie_unref)
void pie_drawPieChart (Pie* self,
                       cairo_t* cr,
                       GeeArrayList* pointsArray,
                       CarolineChartColor* chartColorArray,
                       gint pieChartXStart,
                       gint pieChartYStart,
                       gint pieChartRadius,
                       gint pieChartYLabelBStart,
                       gint pieChartYLabelBSpacing,
                       gint pieChartLabelOffsetX,
                       gint pieChartLabelOffsetY,
                       gint pieChartLabelBSize,
                       gdouble width);
Pie* pie_new (void);
Pie* pie_construct (GType object_type);

G_END_DECLS

#endif
