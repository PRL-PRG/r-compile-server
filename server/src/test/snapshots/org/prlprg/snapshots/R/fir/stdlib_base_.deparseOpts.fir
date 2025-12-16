fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1749670042;
    st `.deparseOpts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1749670042(control) {
  (reg control:*) -+> V { var control:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg control1:*, reg control2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg pmatch:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg control3:*, reg control4:V, reg as_character:cls, reg r8:V, reg p:p(V +), reg __deparseOpts:*, reg __deparseOpts1:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg opts:*, reg opts1:V, reg anyNA:cls, reg r14:V, reg c1:L, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg opts2:*, reg opts3:V, reg is_na:cls, reg r21:V, reg sum:cls, reg r22:V, reg as_integer:cls, reg r23:V, reg p2:p(V +), reg r25:V, reg p3:p(V +), reg paste:cls, reg sQuote:cls, reg control5:*, reg control6:V, reg c2:L, reg control8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg control11:V, reg r28:V, reg opts4:*, reg opts5:V, reg is_na1:cls, reg r29:V, reg __:cls, reg r30:V, reg p4:p(V +), reg r32:V, reg p5:p(V +), reg r34:V, reg p6:p(V +), reg r36:V, reg p7:p(V +), reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg opts6:*, reg opts7:V, reg r42:V, reg any:cls, reg r43:V, reg c3:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg opts8:*, reg opts9:V, reg r46:V, reg any1:cls, reg r47:V, reg c4:L, reg stop1:cls, reg r48:V, reg unique:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg opts10:*, reg opts11:V, reg c5:L, reg opts13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg opts14:*, reg opts15:V, reg r52:V, reg __1:cls, reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg opts16:*, reg opts17:V, reg r56:V, reg any2:cls, reg r57:V, reg r58:V, reg c6:L, reg r59:V, reg c7:cls, reg r60:V, reg p8:p(V +), reg r62:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg r65:V, reg opts18:*, reg opts19:V, reg r66:V, reg any3:cls, reg r67:V, reg c8:L, reg unique1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg r69:V, reg opts20:*, reg opts21:V, reg c9:L, reg opts23:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg opts24:*, reg opts25:V, reg r70:V, reg __2:cls, reg r71:V, reg c10:cls, reg r72:V, reg p9:p(V +), reg r74:V, reg _in_:cls, reg opts26:*, reg opts27:V, reg p10:p(V +), reg r76:V, reg c11:L, reg c13:V, reg _in_1:cls, reg opts28:*, reg opts29:V, reg p11:p(V +), reg r78:V, reg c14:L, reg c15:V, reg c17:L, reg stop2:cls, reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r81:V, reg r82:V, reg opts30:*, reg opts31:V, reg r83:V, reg r84:V, reg sum1:cls, reg r85:V |
    mkenv;
    st control = control;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L22() else L1();
  L18():
    control1 = ld control;
    check L20() else D0();
  L19():
    r = dyn base(<sym control>);
    goto L0(r);
  D0():
    deopt 2 [control1];
  L1():
    pmatch = ldf pmatch;
    check L25() else D2();
  L20():
    control2 = force? control1;
    checkMissing(control2);
    length = ldf length in base;
    r2 = dyn length(control2);
    check L21() else D1();
  L22():
    popenv;
    return 0.0;
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [];
  L21():
    goto L0(r2);
  L25():
    p = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      control3 = ld control;
      control4 = force? control3;
      checkMissing(control4);
      as_character = ldf `as.character` in base;
      r8 = dyn as_character(control4);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym control>);
      goto L0(r6);
    };
    p1 = prom<V +>{
      __deparseOpts = ld `..deparseOpts`;
      __deparseOpts1 = force? __deparseOpts;
      checkMissing(__deparseOpts1);
      return __deparseOpts1;
    };
    r11 = dyn pmatch(p, p1);
    check L26() else D3();
  D3():
    deopt 16 [r11];
  L26():
    st opts = r11;
    sym2 = ldf anyNA;
    base2 = ldf anyNA in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L3(r13):
    c1 = `as.logical`(r13);
    if c1 then L31() else L4();
  L27():
    opts = ld opts;
    check L29() else D4();
  L28():
    r12 = dyn base2(<sym opts>);
    goto L3(r12);
  D4():
    deopt 20 [opts];
  L4():
    goto L5();
  L5():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L35() else L36();
  L29():
    opts1 = force? opts;
    checkMissing(opts1);
    anyNA = ldf anyNA in base;
    r14 = dyn anyNA(opts1);
    check L30() else D5();
  L31():
    stop = ldf stop;
    check L32() else D6();
  D5():
    deopt 23 [r14];
  D6():
    deopt 25 [];
  L6(r41):
    c3 = `as.logical`(r41);
    if c3 then L39() else L7();
  L30():
    goto L3(r14);
  L32():
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        ngettext = ldf ngettext;
        p2 = prom<V +>{
          sym3 = ldf `as.integer`;
          base3 = ldf `as.integer` in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L3() else L4();
        L0(r16):
          return r16;
        L3():
          sym4 = ldf sum;
          base4 = ldf sum in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L5() else L6();
        L4():
          r15 = dyn base3(<lang sum(is.na(opts))>);
          goto L0(r15);
        L1(r18):
          as_integer = ldf `as.integer` in base;
          r23 = dyn as_integer(r18);
          goto L0(r23);
        L5():
          sym5 = ldf `is.na`;
          base5 = ldf `is.na` in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L7() else L8();
        L6():
          r17 = dyn base4(<lang is.na(opts)>);
          goto L1(r17);
        L2(r20):
          sum = ldf sum in base;
          r22 = dyn sum(r20);
          goto L1(r22);
        L7():
          opts2 = ld opts;
          opts3 = force? opts2;
          checkMissing(opts3);
          is_na = ldf `is.na` in base;
          r21 = dyn is_na(opts3);
          goto L2(r21);
        L8():
          r19 = dyn base5(<sym opts>);
          goto L2(r19);
        };
        r25 = dyn ngettext(p2, "deparse option %s is not recognized", "deparse options %s are not recognized");
        return r25;
      };
      p6 = prom<V +>{
        paste = ldf paste;
        p5 = prom<V +>{
          sQuote = ldf sQuote;
          p4 = prom<V +>{
            control5 = ld control;
            control6 = force? control5;
            checkMissing(control6);
            c2 = `is.object`(control6);
            if c2 then L2() else L3(control6);
          L0(dx1):
            return dx1;
          L2():
            dr = tryDispatchBuiltin.1("[", control6);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L4() else L3(dr);
          L3(control8):
            sym6 = ldf `is.na`;
            base6 = ldf `is.na` in base;
            guard6 = `==`.4(sym6, base6);
            if guard6 then L5() else L6();
          L1(control11, r28):
            __ = ldf `[` in base;
            r30 = dyn __(control11, r28);
            goto L0(r30);
          L4():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          L5():
            opts4 = ld opts;
            opts5 = force? opts4;
            checkMissing(opts5);
            is_na1 = ldf `is.na` in base;
            r29 = dyn is_na1(opts5);
            goto L1(control8, r29);
          L6():
            r27 = dyn base6(<sym opts>);
            goto L1(control8, r27);
          };
          r32 = dyn sQuote(p4);
          return r32;
        };
        r34 = dyn paste[, collapse](p5, ", ");
        return r34;
      };
      r36 = dyn sprintf(p3, p6);
      return r36;
    };
    r38 = dyn stop[, `call.`, domain](p7, FALSE, NA_LGL);
    check L33() else D7();
  L35():
    opts6 = ld opts;
    check L37() else D8();
  L36():
    r40 = dyn base7(<lang `==`(opts, 1)>);
    goto L6(r40);
  D7():
    deopt 31 [r38];
  D8():
    deopt 36 [opts6];
  L7():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L51() else L52();
  L11():
    _in_ = ldf `%in%`;
    check L59() else D20();
  L33():
    goto L5();
  L37():
    opts7 = force? opts6;
    checkMissing(opts7);
    r42 = `==`(opts7, 1);
    any = ldf any in base;
    r43 = dyn any(r42);
    check L38() else D9();
  L39():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L40() else L41();
  D9():
    deopt 41 [r43];
  D20():
    deopt 77 [];
  L8(r45):
    c4 = `as.logical`(r45);
    if c4 then L44() else L9();
  L12(r65):
    c8 = `as.logical`(r65);
    if c8 then L55() else L13();
  L38():
    goto L6(r43);
  L40():
    opts8 = ld opts;
    check L42() else D10();
  L41():
    r44 = dyn base8(<lang `==`(opts, 13)>);
    goto L8(r44);
  L51():
    opts18 = ld opts;
    check L53() else D16();
  L52():
    r64 = dyn base11(<lang `==`(opts, 13)>);
    goto L12(r64);
  L59():
    p10 = prom<V +>{
      opts26 = ld opts;
      opts27 = force? opts26;
      checkMissing(opts27);
      return opts27;
    };
    r76 = dyn _in_(10, p10);
    check L60() else D21();
  D10():
    deopt 44 [opts8];
  D16():
    deopt 63 [opts18];
  D21():
    deopt 80 [r76];
  L9():
    goto L10();
  L10():
    unique = ldf unique;
    check L48() else D14();
  L13():
    goto L11();
  L42():
    opts9 = force? opts8;
    checkMissing(opts9);
    r46 = `==`(opts9, 13);
    any1 = ldf any in base;
    r47 = dyn any1(r46);
    check L43() else D11();
  L44():
    stop1 = ldf stop;
    check L45() else D12();
  L53():
    opts19 = force? opts18;
    checkMissing(opts19);
    r66 = `==`(opts19, 13);
    any3 = ldf any in base;
    r67 = dyn any3(r66);
    check L54() else D17();
  L55():
    unique1 = ldf unique;
    check L56() else D18();
  L60():
    c11 = `as.logical`(r76);
    if c11 then L61() else L14(c11);
  D11():
    deopt 49 [r47];
  D12():
    deopt 51 [];
  D14():
    deopt 57 [];
  D17():
    deopt 68 [r67];
  D18():
    deopt 70 [];
  L14(c13):
    c17 = `as.logical`(c13);
    if c17 then L65() else L15();
  L43():
    goto L8(r47);
  L45():
    r48 = dyn stop1("\"all\" and \"exact\" are mutually exclusive");
    check L46() else D13();
  L48():
    p8 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L5() else L6();
    L0(r51):
      return r51;
    L5():
      opts10 = ld opts;
      opts11 = force? opts10;
      checkMissing(opts11);
      c5 = `is.object`(opts11);
      if c5 then L7() else L8(opts11);
    L6():
      r50 = dyn base9(<lang `[`(opts, `!=`(opts, 1))>, <lang `:`(2.0, 6.0)>, 8, <lang if(`!`(any(`==`(opts, 10))), 11)>, 12);
      goto L0(r50);
    L1(dx3):
      sym10 = ldf any;
      base10 = ldf any in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L10() else L11();
    L7():
      dr2 = tryDispatchBuiltin.1("[", opts11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L9() else L8(dr2);
    L8(opts13):
      opts14 = ld opts;
      opts15 = force? opts14;
      checkMissing(opts15);
      r52 = `!=`(opts15, 1);
      __1 = ldf `[` in base;
      r53 = dyn __1(opts13, r52);
      goto L1(r53);
    L2(r55):
      r58 = `!`(r55);
      c6 = `as.logical`(r58);
      if c6 then L12() else L3();
    L9():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L10():
      opts16 = ld opts;
      opts17 = force? opts16;
      checkMissing(opts17);
      r56 = `==`(opts17, 10);
      any2 = ldf any in base;
      r57 = dyn any2(r56);
      goto L2(r57);
    L11():
      r54 = dyn base10(<lang `==`(opts, 10)>);
      goto L2(r54);
    L3():
      goto L4(NULL);
    L4(r59):
      c7 = ldf c in base;
      r60 = dyn c7(dx3, <int 2, 3, 4, 5, 6>, 8, r59, 12);
      goto L0(r60);
    L12():
      goto L4(11);
    };
    r62 = dyn unique(p8);
    check L49() else D15();
  L54():
    goto L12(r67);
  L56():
    p9 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r69):
      return r69;
    L2():
      opts20 = ld opts;
      opts21 = force? opts20;
      checkMissing(opts21);
      c9 = `is.object`(opts21);
      if c9 then L4() else L5(opts21);
    L3():
      r68 = dyn base12(<lang `[`(opts, `!=`(opts, 13))>, <lang `:`(2.0, 6.0)>, 8, 10, 12);
      goto L0(r68);
    L1(dx5):
      c10 = ldf c in base;
      r72 = dyn c10(dx5, <int 2, 3, 4, 5, 6>, 8, 10, 12);
      goto L0(r72);
    L4():
      dr4 = tryDispatchBuiltin.1("[", opts21);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(opts23):
      opts24 = ld opts;
      opts25 = force? opts24;
      checkMissing(opts25);
      r70 = `!=`(opts25, 13);
      __2 = ldf `[` in base;
      r71 = dyn __2(opts23, r70);
      goto L1(r71);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    r74 = dyn unique1(p9);
    check L57() else D19();
  L61():
    _in_1 = ldf `%in%`;
    check L62() else D22();
  D13():
    deopt 53 [r48];
  D15():
    deopt 59 [r62];
  D19():
    deopt 72 [r74];
  D22():
    deopt 82 [c11];
  L15():
    goto L16();
  L16():
    sym13 = ldf sum;
    base13 = ldf sum in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L69() else L70();
  L46():
    goto L10();
  L49():
    st opts = r62;
    goto L11();
  L57():
    st opts = r74;
    goto L11();
  L62():
    p11 = prom<V +>{
      opts28 = ld opts;
      opts29 = force? opts28;
      checkMissing(opts29);
      return opts29;
    };
    r78 = dyn _in_1(11, p11);
    check L63() else D23();
  L65():
    stop2 = ldf stop;
    check L66() else D24();
  D23():
    deopt 85 [c11, r78];
  D24():
    deopt 88 [];
  L17(r82):
    popenv;
    return r82;
  L63():
    c14 = `as.logical`(r78);
    c15 = `&&`(c11, c14);
    goto L14(c15);
  L66():
    r79 = dyn stop2("\"hexNumeric\" and \"digits17\" are mutually exclusive");
    check L67() else D25();
  L69():
    opts30 = ld opts;
    check L71() else D26();
  L70():
    r81 = dyn base13(<lang `^`(2.0, `(`(`-`(opts, 2.0)))>);
    goto L17(r81);
  D25():
    deopt 90 [r79];
  D26():
    deopt 96 [2.0, opts30];
  L67():
    goto L16();
  L71():
    opts31 = force? opts30;
    checkMissing(opts31);
    r83 = `-`(opts31, 2.0);
    r84 = `^`(2.0, r83);
    sum1 = ldf sum in base;
    r85 = dyn sum1(r84);
    check L72() else D27();
  D27():
    deopt 102 [r85];
  L72():
    goto L17(r85);
  }
}