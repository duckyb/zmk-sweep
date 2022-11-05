
        macros {

            macro_undo: macro_undo {
                compatible = "zmk,behavior-macro";
                label = "macro_undo";
                #binding-cells = <0>;
                wait-ms = <0>;
                tap-ms = <40>;
                bindings = 
                    <&macro_press &kp LCTRL>
                    , <&macro_tap &kp Z>
                    , <&macro_release &kp LCTRL>
                ;
            };

            macro_cut: macro_cut {
                compatible = "zmk,behavior-macro";
                label = "macro_cut";
                #binding-cells = <0>;
                wait-ms = <0>;
                tap-ms = <40>;
                bindings = 
                    <&macro_press &kp LCTRL>
                    , <&macro_tap &kp X>
                    , <&macro_release &kp LCTRL>
                ;
            };

            macro_copy: macro_copy {
                compatible = "zmk,behavior-macro";
                label = "macro_copy";
                #binding-cells = <0>;
                wait-ms = <0>;
                tap-ms = <40>;
                bindings = 
                    <&macro_press &kp LCTRL>
                    , <&macro_tap &kp C>
                    , <&macro_release &kp LCTRL>
                ;
            };

            macro_paste: macro_paste {
                compatible = "zmk,behavior-macro";
                label = "macro_paste";
                #binding-cells = <0>;
                wait-ms = <0>;
                tap-ms = <40>;
                bindings = 
                    <&macro_press &kp LCTRL>
                    , <&macro_tap &kp V>
                    , <&macro_release &kp LCTRL>
                ;
            };

        };
        

