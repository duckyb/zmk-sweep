// Layer definitions
#define DEFAULT 0
#define DEFAULT_NO_HM 1
#define DEFAULT_LONG_HM 2
#define SYMBOL 3
#define NUMBER 4
#define NAV 5
#define UTILITY 6
#define MOUSE_BASE 7
#define FUNC 8
#define MOUSE_FAST 9
#define MOUSE_MEDIUM 10
#define MOUSE_SLOW 11
#define MOUSE_CRAWL 12


// global settings
&mt {
    tapping-term-ms = <200>;
};

&lt {
    tapping-term-ms = <130>;
};

&mmv {
  time-to-max-speed-ms = <400>;
  acceleration-exponent = <1>;
};

&mwh {
  time-to-max-speed-ms = <300>;
  acceleration-exponent = <0>;
};

&sk {
    release-after-ms = <400>;
    quick-release;
    /delete-property/ ignore-modifiers;
};

// global keys
#define MEH LS(LA(LCTRL))

// Home row speed settings 
#define hms_base_low_resistance_keycaps 500
#define hms_base_high_resistance_keycaps 200
#define hms_base 500
#define HMS_VVSLO (hms_base + 300)
#define HMS_VSLO (hms_base + 100)
#define HMS_SLOW (hms_base + 50)
#define HMS_EXP  (hms_base + 20)
#define HMS_MEDI (hms_base - 50)
#define HMS_FAST (hms_base - 150)
#define HMS_VFAS 130
