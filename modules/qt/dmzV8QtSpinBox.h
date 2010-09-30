#ifndef DMZ_V8_QT_SPINBOX_DOT_H
#define DMZ_V8_QT_SPINBOX_DOT_H

#include <dmzV8QtObject.h>

class QSpinBox ;


namespace dmz {

   class V8QtSpinBox : public V8QtObject {

      Q_OBJECT

      public:
         V8QtSpinBox (
            const V8Object &Self,
            QWidget *widget,
            JsModuleUiV8QtBasicState *state);

         virtual ~V8QtSpinBox ();

         virtual Boolean bind (
            const String &Signal,
            const V8Object &Self,
            const V8Function &Func);

      public Q_SLOTS:
         void on_valueChanged (int val);
   };
};


#endif // DMZ_V8_QT_SPINBOX_DOT_H