#include "dmzV8QtWidget.h"
// #include <QtGui/QtGui>


dmz::V8QtWidget::V8QtWidget (
      const V8Object &Self,
      QWidget *widget,
      JsModuleUiV8QtBasicState *state) :
      V8QtObject (Self, widget, state) {;}


dmz::V8QtWidget::~V8QtWidget () {;}

