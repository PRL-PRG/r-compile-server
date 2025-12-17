fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1848237990;
    st `print.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1848237990(x, quote, `max.levels`, width, `...`) {
  (reg x:*, reg quote:*, reg max_levels:*, reg width:*, reg ddd:dots) -+> V { var x:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var `max.levels`:*, reg max_levels_isMissing:L, reg max_levels_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg is_ordered:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg cat:cls, reg ord:*, reg ord1:V, reg c1:L, reg p2:p(V +), reg r9:V, reg character:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg length1:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg x7:*, reg x8:V, reg as_character:cls, reg r18:V, reg l:*, reg c2:L, reg r20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r23:V, reg setdiff:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg x9:*, reg x10:V, reg attributes:cls, reg r28:V, reg names:cls, reg r29:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg c3:cls, reg r33:V, reg p5:p(V +), reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg x11:*, reg x12:V, reg attributes1:cls, reg r38:V, reg c4:L, reg r40:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg keepAttrs:*, reg keepAttrs1:V, reg __:cls, reg r41:V, reg l3:*, reg attributes2:cls, reg r42:V, reg c5:L, reg dx5:V, reg l5:*, reg r44:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg l7:*, reg dx9:V, reg keepAttrs2:*, reg keepAttrs3:V, reg ___1:cls, reg r45:V, reg attributes__:cls, reg r46:V, reg print:cls, reg xx:*, reg xx1:V, reg p6:p(V +), reg quote1:*, reg quote2:V, reg p7:p(V +), reg ddd1:dots?, reg r49:V, reg ____:cls, reg max_levels1:*, reg max_levels2:V, reg p8:p(V +), reg r51:V, reg maxl:*, reg maxl1:V, reg c6:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg encodeString:cls, reg levels:cls, reg x13:*, reg x14:V, reg p9:p(V +), reg r55:V, reg p10:p(V +), reg ifelse:cls, reg quote3:*, reg quote4:V, reg p11:p(V +), reg r58:V, reg p12:p(V +), reg r60:V, reg length2:cls, reg r61:V, reg ord2:*, reg ord3:V, reg c7:L, reg r62:S, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg maxl2:*, reg maxl3:V, reg c8:L, reg c9:L, reg width1:*, reg width2:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg width5:V, reg r66:V, reg T0:*, reg T1:V, reg nchar:cls, reg r67:V, reg r68:V, reg r69:V, reg r70:V, reg r71:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg r73:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg lev:*, reg lev1:V, reg nchar1:cls, reg r76:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r79:V, reg r80:V, reg r81:V, reg colsep:*, reg colsep1:V, reg nchar2:cls, reg r82:V, reg r83:V, reg cumsum:cls, reg r84:V, reg n:*, reg n1:V, reg r85:V, reg c10:L, reg c11:V, reg lenl:*, reg lenl1:V, reg c13:L, reg c15:L, reg lenl3:V, reg dr6:V, reg dc3:L, reg dx10:V, reg c17:L, reg dx11:V, reg n2:*, reg n3:V, reg __1:cls, reg r86:V, reg width6:*, reg width7:V, reg r87:V, reg c18:L, reg c19:V, reg c21:L, reg n4:*, reg n5:V, reg n6:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r88:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r89:V, reg r90:V, reg lenl4:*, reg lenl5:V, reg width8:*, reg width9:V, reg r91:V, reg which_max:cls, reg r92:V, reg r93:V, reg max:cls, reg r94:V, reg n8:*, reg n9:V, reg maxl4:*, reg maxl5:V, reg r95:V, reg cat1:cls, reg drop:*, reg drop1:V, reg c22:L, reg paste:cls, reg format:cls, reg n10:*, reg n11:V, reg p13:p(V +), reg r97:V, reg p14:p(V +), reg r99:V, reg p15:p(V +), reg T2:*, reg T3:V, reg p16:p(V +), reg paste1:cls, reg drop2:*, reg drop3:V, reg c23:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r102:V, reg r103:V, reg lev2:*, reg lev3:V, reg c24:L, reg lev5:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r106:V, reg lev8:V, reg r107:I, reg r108:V, reg maxl6:*, reg maxl7:V, reg r109:V, reg max1:cls, reg r110:V, reg r111:V, reg __2:cls, reg r112:V, reg maxl8:*, reg maxl9:V, reg r113:V, reg c25:L, reg lev9:*, reg lev10:V, reg c26:L, reg lev12:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg n12:*, reg n13:V, reg __3:cls, reg r114:V, reg dx16:V, reg c27:cls, reg r115:V, reg lev13:*, reg lev14:V, reg p17:p(V +), reg colsep2:*, reg colsep3:V, reg p18:p(V +), reg r118:V, reg p19:p(V +), reg r120:V, reg isTRUE:cls, reg _valid_factor:cls, reg x15:*, reg x16:V, reg p20:p(V +), reg r123:V, reg p21:p(V +), reg r125:V, reg r126:V, reg c28:L, reg warning:cls, reg val:*, reg val1:V, reg p22:p(V +), reg r128:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r130:V, reg r131:V, reg x17:*, reg x18:V, reg invisible:cls, reg r132:V |
    mkenv;
    st x = x;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L0(FALSE) else L0(quote);
  L0(quote_orDefault):
    st quote = quote_orDefault;
    max_levels_isMissing = missing.0(max_levels);
    if max_levels_isMissing then L1(NULL) else L1(max_levels);
  L1(max_levels_orDefault):
    st `max.levels` = max_levels_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L2() else L3(width);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      return r;
    };
    goto L3(p);
  L3(width_orDefault):
    st width = width_orDefault;
    st `...` = ddd;
    is_ordered = ldf `is.ordered`;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn is_ordered(p1);
    check L33() else D1();
  D1():
    deopt 3 [r3];
  L33():
    st ord = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L4(r5):
    r7 = `==`(r5, 0);
    c = `as.logical`(r7);
    if c then L38() else L5();
  L34():
    x3 = ld x;
    check L36() else D2();
  L35():
    r4 = dyn base(<sym x>);
    goto L4(r4);
  D2():
    deopt 7 [x3];
  L5():
    character = ldf character;
    check L42() else D6();
  L6():
    ____ = ldf `%||%`;
    check L71() else D22();
  L36():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r6 = dyn length(x4);
    check L37() else D3();
  L38():
    cat = ldf cat;
    check L39() else D4();
  D3():
    deopt 10 [r6];
  D4():
    deopt 14 [];
  D6():
    deopt 21 [];
  D22():
    deopt 71 [];
  L37():
    goto L4(r6);
  L39():
    p2 = prom<V +>{
      ord = ld ord;
      ord1 = force? ord;
      checkMissing(ord1);
      c1 = `as.logical`(ord1);
      if c1 then L1() else L0();
    L0():
      return "factor";
    L1():
      return "ordered";
    };
    r9 = dyn cat[, , sep](p2, "()\n", "");
    check L40() else D5();
  L42():
    p3 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      length1 = ldf length in base;
      r13 = dyn length1(x6);
      goto L0(r13);
    L2():
      r11 = dyn base1(<sym x>);
      goto L0(r11);
    };
    r15 = dyn character(p3);
    check L43() else D7();
  L71():
    p8 = prom<V +>{
      max_levels1 = ld `max.levels`;
      max_levels2 = force? max_levels1;
      checkMissing(max_levels2);
      return max_levels2;
    };
    r51 = dyn ____(p8, TRUE);
    check L72() else D23();
  D5():
    deopt 19 [r9];
  D7():
    deopt 23 [r15];
  D23():
    deopt 74 [r51];
  L40():
    goto L6();
  L43():
    st xx = r15;
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L72():
    st maxl = r51;
    maxl = ld maxl;
    check L73() else D24();
  D24():
    deopt 76 [maxl];
  L7(r17):
    l = ld xx;
    c2 = `is.object`(l);
    if c2 then L48() else L49(r17);
  L44():
    x7 = ld x;
    check L46() else D8();
  L45():
    r16 = dyn base2(<sym x>);
    goto L7(r16);
  L73():
    maxl1 = force? maxl;
    checkMissing(maxl1);
    c6 = `as.logical`(maxl1);
    if c6 then L74() else L12();
  D8():
    deopt 27 [x7];
  L8(dx1):
    st xx = dx1;
    setdiff = ldf setdiff;
    check L51() else D10();
  L12():
    goto L28();
  L28():
    isTRUE = ldf isTRUE;
    check L129() else D51();
  L46():
    x8 = force? x7;
    checkMissing(x8);
    as_character = ldf `as.character` in base;
    r18 = dyn as_character(x8);
    check L47() else D9();
  L48():
    dr = tryDispatchBuiltin.0("[<-", l, r17);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(r17);
  L49(r20):
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l, <missing>, r17);
    goto L8(r23);
  L74():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  D9():
    deopt 30 [r18];
  D10():
    deopt 37 [];
  D51():
    deopt 194 [];
  L13(r53):
    st n = r53;
    ord2 = ld ord;
    check L80() else D28();
  L47():
    goto L7(r18);
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L51():
    p4 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r25):
      return r25;
    L2():
      sym4 = ldf attributes;
      base4 = ldf attributes in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r24 = dyn base3(<lang attributes(x)>);
      goto L0(r24);
    L1(r27):
      names = ldf names in base;
      r29 = dyn names(r27);
      goto L0(r29);
    L4():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attributes = ldf attributes in base;
      r28 = dyn attributes(x10);
      goto L1(r28);
    L5():
      r26 = dyn base4(<sym x>);
      goto L1(r26);
    };
    p5 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      c3 = ldf c in base;
      r33 = dyn c3("levels", "class");
      goto L0(r33);
    L2():
      r31 = dyn base5("levels", "class");
      goto L0(r31);
    };
    r35 = dyn setdiff(p4, p5);
    check L52() else D11();
  L75():
    encodeString = ldf encodeString;
    check L77() else D25();
  L76():
    r52 = dyn base7(<lang `<-`(lev, encodeString(levels(x), quote=ifelse(quote, "\"", "")))>);
    goto L13(r52);
  L129():
    p21 = prom<V +>{
      _valid_factor = ldf `.valid.factor`;
      p20 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r123 = dyn _valid_factor(p20);
      st val = r123;
      invisible.0();
      return r123;
    };
    r125 = dyn isTRUE(p21);
    check L130() else D52();
  D11():
    deopt 40 [r35];
  D25():
    deopt 81 [];
  D28():
    deopt 90 [ord2];
  D52():
    deopt 196 [r125];
  L52():
    st keepAttrs = r35;
    sym6 = ldf attributes;
    base6 = ldf attributes in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L77():
    p10 = prom<V +>{
      levels = ldf levels;
      p9 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r55 = dyn levels(p9);
      return r55;
    };
    p12 = prom<V +>{
      ifelse = ldf ifelse;
      p11 = prom<V +>{
        quote3 = ld quote;
        quote4 = force? quote3;
        checkMissing(quote4);
        return quote4;
      };
      r58 = dyn ifelse(p11, "\"", "");
      return r58;
    };
    r60 = dyn encodeString[, quote](p10, p12);
    check L78() else D26();
  L80():
    ord3 = force? ord2;
    checkMissing(ord3);
    c7 = `as.logical`(ord3);
    if c7 then L81() else L14();
  L130():
    r126 = `!`(r125);
    c28 = `as.logical`(r126);
    if c28 then L131() else L29();
  D26():
    deopt 85 [r60];
  L9(r37):
    c4 = `is.object`(r37);
    if c4 then L57() else L58(r37);
  L14():
    goto L15(" ");
  L15(r62):
    st colsep = r62;
    st T0 = "Levels: ";
    sym8 = ldf `is.logical`;
    base8 = ldf `is.logical` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L29():
    goto L30();
  L30():
    sym17 = ldf invisible;
    base17 = ldf invisible in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L135() else L136();
  L53():
    x11 = ld x;
    check L55() else D12();
  L54():
    r36 = dyn base6(<sym x>);
    goto L9(r36);
  L78():
    st lev = r60;
    length2 = ldf length in base;
    r61 = dyn length2(r60);
    check L79() else D27();
  L81():
    goto L15(" < ");
  L131():
    warning = ldf warning;
    check L132() else D53();
  D12():
    deopt 44 [x11];
  D27():
    deopt 88 [r61];
  D53():
    deopt 199 [];
  L10(dx3):
    l3 = ld xx;
    attributes2 = ldf attributes;
    check L61() else D15();
  L16(r64):
    c9 = `as.logical`(r64);
    if c9 then L86() else L17();
  L31(r131):
    popenv;
    return r131;
  L55():
    x12 = force? x11;
    checkMissing(x12);
    attributes1 = ldf attributes in base;
    r38 = dyn attributes1(x12);
    check L56() else D13();
  L57():
    dr2 = tryDispatchBuiltin.1("[", r37);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dr2);
  L58(r40):
    keepAttrs = ld keepAttrs;
    check L60() else D14();
  L79():
    goto L13(r61);
  L83():
    maxl2 = ld maxl;
    check L85() else D29();
  L84():
    r63 = dyn base8(<sym maxl>);
    goto L16(r63);
  L132():
    p22 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    r128 = dyn warning(p22);
    check L133() else D54();
  L135():
    x17 = ld x;
    check L137() else D55();
  L136():
    r130 = dyn base17(<sym x>);
    goto L31(r130);
  D13():
    deopt 47 [r38];
  D14():
    deopt 48 [r40, keepAttrs];
  D15():
    deopt 52 [dx3, l3, dx3];
  D29():
    deopt 101 [maxl2];
  D54():
    deopt 201 [r128];
  D55():
    deopt 206 [x17];
  L17():
    goto L27();
  L27():
    n8 = ld n;
    check L124() else D47();
  L56():
    goto L9(r38);
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L60():
    keepAttrs1 = force? keepAttrs;
    __ = ldf `[` in base;
    r41 = dyn __(r40, keepAttrs1);
    goto L10(r41);
  L61():
    r42 = dyn attributes2(dx3, NULL);
    check L62() else D16();
  L85():
    maxl3 = force? maxl2;
    checkMissing(maxl3);
    c8 = `is.logical`(maxl3);
    goto L16(c8);
  L86():
    width1 = ld width;
    check L87() else D30();
  L133():
    goto L30();
  L137():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r132 = dyn invisible(x18);
    check L138() else D56();
  D16():
    deopt 54 [dx3, l3, dx3, r42];
  D30():
    deopt 104 [width1];
  D47():
    deopt 177 [n8];
  D56():
    deopt 209 [r132];
  L62():
    c5 = `is.object`(r42);
    if c5 then L63() else L64(dx3, l3, r42);
  L87():
    width2 = force? width1;
    checkMissing(width2);
    sym9 = ldf nchar;
    base9 = ldf nchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L88() else L89();
  L124():
    n9 = force? n8;
    checkMissing(n9);
    maxl4 = ld maxl;
    check L125() else D48();
  L138():
    goto L31(r132);
  D48():
    deopt 178 [n9, maxl4];
  L11(dx8, l7, dx9):
    attributes__ = ldf `attributes<-`;
    check L67() else D18();
  L18(width5, r66):
    r68 = `+`(r66, 3);
    r69 = `+`(r68, 1);
    r70 = `+`(r69, 3);
    r71 = `-`(width5, r70);
    st width = r71;
    sym10 = ldf cumsum;
    base10 = ldf cumsum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L92() else L93();
  L63():
    dr4 = tryDispatchBuiltin.0("[<-", r42, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L65() else L64(dx3, l3, dr4);
  L64(dx5, l5, r44):
    keepAttrs2 = ld keepAttrs;
    check L66() else D17();
  L88():
    T0 = ld T0;
    check L90() else D31();
  L89():
    r65 = dyn base9(<sym T0>, "w");
    goto L18(width2, r65);
  L125():
    maxl5 = force? maxl4;
    checkMissing(maxl5);
    r95 = `>`(n9, maxl5);
    st drop = r95;
    cat1 = ldf cat;
    check L126() else D49();
  D17():
    deopt 56 [dx5, l5, r44, dx3, keepAttrs2];
  D18():
    deopt 59 [dx8, l7, dx9];
  D31():
    deopt 107 [width2, T0];
  D49():
    deopt 183 [];
  L19(r73):
    st lenl = r73;
    n = ld n;
    check L103() else D38();
  L65():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx3, l3, dx7);
  L66():
    keepAttrs3 = force? keepAttrs2;
    ___1 = ldf `[<-` in base;
    r45 = dyn ___1(r44, dx3, keepAttrs3);
    goto L11(dx5, l5, r45);
  L67():
    r46 = dyn attributes__(l7, NULL, dx9);
    check L68() else D19();
  L90():
    T1 = force? T0;
    checkMissing(T1);
    nchar = ldf nchar in base;
    r67 = dyn nchar(T1, "w", FALSE, NA_LGL);
    check L91() else D32();
  L92():
    sym11 = ldf nchar;
    base11 = ldf nchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L94() else L95();
  L93():
    r72 = dyn base10(<lang `+`(nchar(lev, "w"), nchar(colsep, "w"))>);
    goto L19(r72);
  L126():
    p15 = prom<V +>{
      drop = ld drop;
      drop1 = force? drop;
      checkMissing(drop1);
      c22 = `as.logical`(drop1);
      if c22 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      paste = ldf paste;
      p14 = prom<V +>{
        format = ldf format;
        p13 = prom<V +>{
          n10 = ld n;
          n11 = force? n10;
          checkMissing(n11);
          return n11;
        };
        r97 = dyn format(p13);
        return r97;
      };
      r99 = dyn paste(p14, "");
      return r99;
    };
    p16 = prom<V +>{
      T2 = ld T0;
      T3 = force? T2;
      checkMissing(T3);
      return T3;
    };
    p19 = prom<V +>{
      paste1 = ldf paste;
      p17 = prom<V +>{
        drop2 = ld drop;
        drop3 = force? drop2;
        checkMissing(drop3);
        c23 = `as.logical`(drop3);
        if c23 then L7() else L0();
      L0():
        lev13 = ld lev;
        lev14 = force? lev13;
        checkMissing(lev14);
        return lev14;
      L7():
        sym15 = ldf c;
        base15 = ldf c in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L8() else L9();
      L1(r103):
        return r103;
      L8():
        lev2 = ld lev;
        lev3 = force? lev2;
        checkMissing(lev3);
        c24 = `is.object`(lev3);
        if c24 then L10() else L11(lev3);
      L9():
        r102 = dyn base15(<lang `[`(lev, `:`(1, max(1.0, `-`(maxl, 1.0))))>, "...", <lang if(`>`(maxl, 1.0), `[`(lev, n))>);
        goto L1(r102);
      L2(dx13):
        maxl8 = ld maxl;
        maxl9 = force? maxl8;
        checkMissing(maxl9);
        r113 = `>`(maxl9, 1.0);
        c25 = `as.logical`(r113);
        if c25 then L15() else L4();
      L10():
        dr8 = tryDispatchBuiltin.1("[", lev3);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L12() else L11(dr8);
      L11(lev5):
        sym16 = ldf max;
        base16 = ldf max in base;
        guard16 = `==`.4(sym16, base16);
        if guard16 then L13() else L14();
      L3(lev8, r107, r108):
        r111 = `:`(r107, r108);
        __2 = ldf `[` in base;
        r112 = dyn __2(lev8, r111);
        goto L2(r112);
      L4():
        goto L6(NULL);
      L6(dx16):
        c27 = ldf c in base;
        r115 = dyn c27(dx13, "...", dx16);
        goto L1(r115);
      L12():
        dx12 = getTryDispatchBuiltinValue(dr8);
        goto L2(dx12);
      L13():
        maxl6 = ld maxl;
        maxl7 = force? maxl6;
        checkMissing(maxl7);
        r109 = `-`(maxl7, 1.0);
        max1 = ldf max in base;
        r110 = dyn max1(1.0, r109);
        goto L3(lev5, 1, r110);
      L14():
        r106 = dyn base16(1.0, <lang `-`(maxl, 1.0)>);
        goto L3(lev5, 1, r106);
      L15():
        lev9 = ld lev;
        lev10 = force? lev9;
        checkMissing(lev10);
        c26 = `is.object`(lev10);
        if c26 then L16() else L17(lev10);
      L5(dx15):
        goto L6(dx15);
      L16():
        dr10 = tryDispatchBuiltin.1("[", lev10);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L18() else L17(dr10);
      L17(lev12):
        n12 = ld n;
        n13 = force? n12;
        __3 = ldf `[` in base;
        r114 = dyn __3(lev12, n13);
        goto L5(r114);
      L18():
        dx14 = getTryDispatchBuiltinValue(dr10);
        goto L5(dx14);
      };
      p18 = prom<V +>{
        colsep2 = ld colsep;
        colsep3 = force? colsep2;
        checkMissing(colsep3);
        return colsep3;
      };
      r118 = dyn paste1[, collapse](p17, p18);
      return r118;
    };
    r120 = dyn cat1[, , , , sep](p15, p16, p19, "\n", "");
    check L127() else D50();
  D19():
    deopt 61 [dx8, r46];
  D32():
    deopt 113 [width2, r67];
  D38():
    deopt 145 [n];
  D50():
    deopt 190 [r120];
  L20(r75):
    sym12 = ldf nchar;
    base12 = ldf nchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L98() else L99();
  L68():
    st xx = r46;
    print = ldf print;
    check L69() else D20();
  L91():
    goto L18(width2, r67);
  L94():
    lev = ld lev;
    check L96() else D33();
  L95():
    r74 = dyn base11(<sym lev>, "w");
    goto L20(r74);
  L103():
    n1 = force? n;
    checkMissing(n1);
    r85 = `<=`(n1, 1);
    c10 = `as.logical`(r85);
    if c10 then L22(c10) else L104();
  L127():
    goto L28();
  D20():
    deopt 64 [];
  D33():
    deopt 126 [lev];
  L21(r80, r81):
    r83 = `+`(r80, r81);
    cumsum = ldf cumsum in base;
    r84 = dyn cumsum(r83);
    check L102() else D37();
  L22(c11):
    c21 = `as.logical`(c11);
    if c21 then L112() else L24();
  L69():
    p6 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p7 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    ddd1 = ld `...`;
    r49 = dyn print[, quote, `...`](p6, p7, ddd1);
    check L70() else D21();
  L96():
    lev1 = force? lev;
    checkMissing(lev1);
    nchar1 = ldf nchar in base;
    r76 = dyn nchar1(lev1, "w", FALSE, NA_LGL);
    check L97() else D34();
  L98():
    colsep = ld colsep;
    check L100() else D35();
  L99():
    r79 = dyn base12(<sym colsep>, "w");
    goto L21(r75, r79);
  L104():
    lenl = ld lenl;
    check L105() else D39();
  D21():
    deopt 69 [r49];
  D34():
    deopt 132 [r76];
  D35():
    deopt 134 [r75, colsep];
  D37():
    deopt 143 [r84];
  D39():
    deopt 149 [c10, lenl];
  L24():
    sym13 = ldf max;
    base13 = ldf max in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L115() else L116();
  L25(n6):
    st maxl = n6;
    goto L27();
  L70():
    goto L6();
  L97():
    goto L20(r76);
  L100():
    colsep1 = force? colsep;
    checkMissing(colsep1);
    nchar2 = ldf nchar in base;
    r82 = dyn nchar2(colsep1, "w", FALSE, NA_LGL);
    check L101() else D36();
  L102():
    goto L19(r84);
  L105():
    lenl1 = force? lenl;
    checkMissing(lenl1);
    c13 = `is.object`(lenl1);
    if c13 then L106() else L107(c10, lenl1);
  L112():
    n4 = ld n;
    check L113() else D42();
  D36():
    deopt 140 [r75, r82];
  D42():
    deopt 157 [n4];
  L23(c17, dx11):
    width6 = ld width;
    check L110() else D41();
  L101():
    goto L21(r75, r82);
  L106():
    dr6 = tryDispatchBuiltin.1("[", lenl1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L108() else L107(c10, dr6);
  L107(c15, lenl3):
    n2 = ld n;
    check L109() else D40();
  L113():
    n5 = force? n4;
    checkMissing(n5);
    goto L25(n5);
  L115():
    sym14 = ldf `which.max`;
    base14 = ldf `which.max` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L117() else L118();
  L116():
    r88 = dyn base13(1, <lang `-`(which.max(`>`(lenl, width)), 1)>);
    goto L25(r88);
  D40():
    deopt 151 [c15, lenl3, n2];
  D41():
    deopt 153 [c17, dx11, width6];
  L26(r90):
    r93 = `-`(r90, 1);
    max = ldf max in base;
    r94 = dyn max(1, r93);
    check L122() else D46();
  L108():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L23(c10, dx10);
  L109():
    n3 = force? n2;
    __1 = ldf `[` in base;
    r86 = dyn __1(lenl3, n3);
    goto L23(c15, r86);
  L110():
    width7 = force? width6;
    checkMissing(width7);
    r87 = `<=`(dx11, width7);
    c18 = `as.logical`(r87);
    c19 = `||`(c17, c18);
    goto L22(c19);
  L117():
    lenl4 = ld lenl;
    check L119() else D43();
  L118():
    r89 = dyn base14(<lang `>`(lenl, width)>);
    goto L26(r89);
  D43():
    deopt 164 [lenl4];
  D46():
    deopt 173 [r94];
  L119():
    lenl5 = force? lenl4;
    checkMissing(lenl5);
    width8 = ld width;
    check L120() else D44();
  L122():
    goto L25(r94);
  D44():
    deopt 165 [lenl5, width8];
  L120():
    width9 = force? width8;
    checkMissing(width9);
    r91 = `>`(lenl5, width9);
    which_max = ldf `which.max` in base;
    r92 = dyn which_max(r91);
    check L121() else D45();
  D45():
    deopt 169 [r92];
  L121():
    goto L26(r92);
  }
}