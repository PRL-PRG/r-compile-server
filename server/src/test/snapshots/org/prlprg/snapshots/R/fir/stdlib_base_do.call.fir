fun main() {
  () -+> V { reg r:cls, reg do_call:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg r3:V, reg p:p(V +), reg r5:V, reg expand_grid:cls, reg letters:*, reg letters1:V, reg c:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p1:p(V +), reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg do_call1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg tmp:*, reg tmp1:V, reg c2:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg do_call2:cls, reg paste:*, reg paste1:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg as_name:cls, reg r22:V, reg as_name1:cls, reg r23:V, reg list1:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg r27:cls, reg new_env:cls, reg r28:V, reg assign:cls, reg env:*, reg env1:V, reg p7:p(V +), reg r30:V, reg assign1:cls, reg f:*, reg f1:V, reg p8:p(V +), reg env2:*, reg env3:V, reg p9:p(V +), reg r33:V, reg r34:cls, reg f2:cls, reg A:*, reg A1:V, reg p10:p(V +), reg r36:V, reg do_call3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg A2:*, reg A3:V, reg list2:cls, reg r39:V, reg p11:p(V +), reg r41:V, reg do_call4:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg A4:*, reg A5:V, reg list3:cls, reg r44:V, reg p12:p(V +), reg env4:*, reg env5:V, reg p13:p(V +), reg r47:V, reg do_call5:cls, reg f3:*, reg f4:V, reg p14:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg A6:*, reg A7:V, reg list4:cls, reg r51:V, reg p15:p(V +), reg env6:*, reg env7:V, reg p16:p(V +), reg r54:V, reg do_call6:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg quote:cls, reg r59:V, reg list5:cls, reg r60:V, reg p17:p(V +), reg env8:*, reg env9:V, reg p18:p(V +), reg r63:V, reg do_call7:cls, reg f5:*, reg f6:V, reg p19:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg quote1:cls, reg r69:V, reg list6:cls, reg r70:V, reg p20:p(V +), reg env10:*, reg env11:V, reg p21:p(V +), reg r73:V, reg do_call8:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg as_name2:cls, reg r76:V, reg list7:cls, reg r77:V, reg p22:p(V +), reg env12:*, reg env13:V, reg p23:p(V +), reg r80:V, reg eval:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r81:V, reg r82:V, reg call:cls, reg r83:V, reg p24:p(V +), reg r85:V, reg eval1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r86:V, reg r87:V, reg call1:cls, reg r88:V, reg p25:p(V +), reg r90:V, reg eval2:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r91:V, reg r92:V, reg call2:cls, reg r93:V, reg p26:p(V +), reg env14:*, reg env15:V, reg p27:p(V +), reg r96:V, reg eval3:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r97:V, reg r98:V, reg call3:cls, reg r99:V, reg p28:p(V +), reg env16:*, reg env17:V, reg p29:p(V +), reg r102:V |
    mkenv;
    r = clos inner53386235;
    st `do.call` = r;
    do_call = ldf `do.call`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      list = ldf list in base;
      r3 = dyn list(<int 1, 2, 3>);
      goto L0(r3);
    L2():
      r1 = dyn base[imaginary](<lang `:`(1.0, 3.0)>);
      goto L0(r1);
    };
    r5 = dyn do_call("complex", p);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    expand_grid = ldf `expand.grid`;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c = `is.object`(letters1);
      if c then L1() else L2(letters1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", letters1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(letters3):
      __ = ldf `[` in base;
      r6 = dyn __(letters3, <int 1, 2>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c1 = ldf c in base;
      r11 = dyn c1("+", "-");
      goto L0(r11);
    L2():
      r9 = dyn base1("+", "-");
      goto L0(r9);
    };
    r13 = dyn expand_grid(p1, p2, p3);
    check L3() else D3();
  D3():
    deopt 13 [r13];
  L3():
    st tmp = r13;
    do_call1 = ldf `do.call`;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      c2 = ldf c in base;
      r16 = dyn c2(tmp1, "");
      goto L0(r16);
    L2():
      r14 = dyn base2[, sep](<sym tmp>, "");
      goto L0(r14);
    };
    r18 = dyn do_call1("paste", p4);
    check L5() else D5();
  D5():
    deopt 19 [r18];
  L5():
    do_call2 = ldf `do.call`;
    check L6() else D6();
  D6():
    deopt 21 [];
  L6():
    p5 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    p6 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      as_name = ldf `as.name`;
      r22 = dyn as_name("A");
      as_name1 = ldf `as.name`;
      r23 = dyn as_name1("B");
      list1 = ldf list in base;
      r24 = dyn list1(r22, r23);
      goto L0(r24);
    L2():
      r20 = dyn base3(<lang as.name("A")>, <lang as.name("B")>);
      goto L0(r20);
    };
    r26 = dyn do_call2[, , quote](p5, p6, TRUE);
    check L7() else D7();
  D7():
    deopt 26 [r26];
  L7():
    st A = 2.0;
    r27 = clos inner354062069;
    st f = r27;
    new_env = ldf `new.env`;
    check L8() else D8();
  D8():
    deopt 34 [];
  L8():
    r28 = dyn new_env();
    check L9() else D9();
  D9():
    deopt 35 [r28];
  L9():
    st env = r28;
    assign = ldf assign;
    check L10() else D10();
  D10():
    deopt 38 [];
  L10():
    p7 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r30 = dyn assign[, , envir]("A", 10.0, p7);
    check L11() else D11();
  D11():
    deopt 43 [r30];
  L11():
    assign1 = ldf assign;
    check L12() else D12();
  D12():
    deopt 45 [];
  L12():
    p8 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p9 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r33 = dyn assign1[, , envir]("f", p8, p9);
    check L13() else D13();
  D13():
    deopt 50 [r33];
  L13():
    r34 = clos inner354062069;
    st f = r34;
    f2 = ldf f;
    check L14() else D14();
  D14():
    deopt 55 [];
  L14():
    p10 = prom<V +>{
      A = ld A;
      A1 = force? A;
      checkMissing(A1);
      return A1;
    };
    r36 = dyn f2(p10);
    check L15() else D15();
  D15():
    deopt 57 [r36];
  L15():
    do_call3 = ldf `do.call`;
    check L16() else D16();
  D16():
    deopt 59 [];
  L16():
    p11 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      A2 = ld A;
      A3 = force? A2;
      checkMissing(A3);
      list2 = ldf list in base;
      r39 = dyn list2(A3);
      goto L0(r39);
    L2():
      r37 = dyn base4(<sym A>);
      goto L0(r37);
    };
    r41 = dyn do_call3("f", p11);
    check L17() else D17();
  D17():
    deopt 62 [r41];
  L17():
    do_call4 = ldf `do.call`;
    check L18() else D18();
  D18():
    deopt 64 [];
  L18():
    p12 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      A4 = ld A;
      A5 = force? A4;
      checkMissing(A5);
      list3 = ldf list in base;
      r44 = dyn list3(A5);
      goto L0(r44);
    L2():
      r42 = dyn base5(<sym A>);
      goto L0(r42);
    };
    p13 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r47 = dyn do_call4[, , envir]("f", p12, p13);
    check L19() else D19();
  D19():
    deopt 69 [r47];
  L19():
    do_call5 = ldf `do.call`;
    check L20() else D20();
  D20():
    deopt 71 [];
  L20():
    p14 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p15 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      A6 = ld A;
      A7 = force? A6;
      checkMissing(A7);
      list4 = ldf list in base;
      r51 = dyn list4(A7);
      goto L0(r51);
    L2():
      r49 = dyn base6(<sym A>);
      goto L0(r49);
    };
    p16 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r54 = dyn do_call5[, , envir](p14, p15, p16);
    check L21() else D21();
  D21():
    deopt 76 [r54];
  L21():
    do_call6 = ldf `do.call`;
    check L22() else D22();
  D22():
    deopt 78 [];
  L22():
    p17 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r56):
      return r56;
    L2():
      sym8 = ldf quote;
      base8 = ldf quote in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r55 = dyn base7(<lang quote(A)>);
      goto L0(r55);
    L1(r58):
      list5 = ldf list in base;
      r60 = dyn list5(r58);
      goto L0(r60);
    L4():
      quote = ldf quote in base;
      r59 = dyn quote(<sym A>);
      goto L1(r59);
    L5():
      r57 = dyn base8(<sym A>);
      goto L1(r57);
    };
    p18 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    r63 = dyn do_call6[, , envir]("f", p17, p18);
    check L23() else D23();
  D23():
    deopt 83 [r63];
  L23():
    do_call7 = ldf `do.call`;
    check L24() else D24();
  D24():
    deopt 85 [];
  L24():
    p19 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p20 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r66):
      return r66;
    L2():
      sym10 = ldf quote;
      base10 = ldf quote in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r65 = dyn base9(<lang quote(A)>);
      goto L0(r65);
    L1(r68):
      list6 = ldf list in base;
      r70 = dyn list6(r68);
      goto L0(r70);
    L4():
      quote1 = ldf quote in base;
      r69 = dyn quote1(<sym A>);
      goto L1(r69);
    L5():
      r67 = dyn base10(<sym A>);
      goto L1(r67);
    };
    p21 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    r73 = dyn do_call7[, , envir](p19, p20, p21);
    check L25() else D25();
  D25():
    deopt 90 [r73];
  L25():
    do_call8 = ldf `do.call`;
    check L26() else D26();
  D26():
    deopt 92 [];
  L26():
    p22 = prom<V +>{
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      as_name2 = ldf `as.name`;
      r76 = dyn as_name2("A");
      list7 = ldf list in base;
      r77 = dyn list7(r76);
      goto L0(r77);
    L2():
      r74 = dyn base11(<lang as.name("A")>);
      goto L0(r74);
    };
    p23 = prom<V +>{
      env12 = ld env;
      env13 = force? env12;
      checkMissing(env13);
      return env13;
    };
    r80 = dyn do_call8[, , envir]("f", p22, p23);
    check L27() else D27();
  D27():
    deopt 97 [r80];
  L27():
    eval = ldf eval;
    check L28() else D28();
  D28():
    deopt 99 [];
  L28():
    p24 = prom<V +>{
      sym12 = ldf call;
      base12 = ldf call in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      call = ldf call in base;
      r83 = dyn call("f", <sym A>);
      goto L0(r83);
    L2():
      r81 = dyn base12("f", <sym A>);
      goto L0(r81);
    };
    r85 = dyn eval(p24);
    check L29() else D29();
  D29():
    deopt 101 [r85];
  L29():
    eval1 = ldf eval;
    check L30() else D30();
  D30():
    deopt 103 [];
  L30():
    p25 = prom<V +>{
      sym13 = ldf call;
      base13 = ldf call in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      call1 = ldf call in base;
      r88 = dyn call1("f", <lang quote(A)>);
      goto L0(r88);
    L2():
      r86 = dyn base13("f", <lang quote(A)>);
      goto L0(r86);
    };
    r90 = dyn eval1(p25);
    check L31() else D31();
  D31():
    deopt 105 [r90];
  L31():
    eval2 = ldf eval;
    check L32() else D32();
  D32():
    deopt 107 [];
  L32():
    p26 = prom<V +>{
      sym14 = ldf call;
      base14 = ldf call in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      call2 = ldf call in base;
      r93 = dyn call2("f", <sym A>);
      goto L0(r93);
    L2():
      r91 = dyn base14("f", <sym A>);
      goto L0(r91);
    };
    p27 = prom<V +>{
      env14 = ld env;
      env15 = force? env14;
      checkMissing(env15);
      return env15;
    };
    r96 = dyn eval2[, envir](p26, p27);
    check L33() else D33();
  D33():
    deopt 111 [r96];
  L33():
    eval3 = ldf eval;
    check L34() else D34();
  D34():
    deopt 113 [];
  L34():
    p28 = prom<V +>{
      sym15 = ldf call;
      base15 = ldf call in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r98):
      return r98;
    L1():
      call3 = ldf call in base;
      r99 = dyn call3("f", <lang quote(A)>);
      goto L0(r99);
    L2():
      r97 = dyn base15("f", <lang quote(A)>);
      goto L0(r97);
    };
    p29 = prom<V +>{
      env16 = ld env;
      env17 = force? env16;
      checkMissing(env17);
      return env17;
    };
    r102 = dyn eval3[, envir](p28, p29);
    check L35() else D35();
  D35():
    deopt 117 [r102];
  L35():
    popenv;
    return r102;
  }
}
fun inner53386235(what, args, quote, envir) {
  (reg what:*, reg args:*, reg quote:*, reg envir:*) -+> V { var what:*, var args:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg args1:*, reg args2:V, reg is_list:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg quote1:*, reg quote2:V, reg c1:L, reg lapply:cls, reg args3:*, reg args4:V, reg p1:p(V +), reg enquote:*, reg enquote1:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg what1:*, reg what2:V, reg args5:*, reg args6:V, reg envir1:*, reg envir2:V, reg do_call:cls, reg r14:V |
    mkenv;
    st what = what;
    st args = args;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L0(FALSE) else L0(quote);
  L0(quote_orDefault):
    st quote = quote_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L1() else L2(envir);
  L1():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L2(p);
  L2(envir_orDefault):
    st envir = envir_orDefault;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L3(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L13() else L4();
  L9():
    args1 = ld args;
    check L11() else D0();
  L10():
    r2 = dyn base(<sym args>);
    goto L3(r2);
  D0():
    deopt 2 [args1];
  L4():
    goto L5();
  L5():
    quote1 = ld quote;
    check L17() else D4();
  L11():
    args2 = force? args1;
    checkMissing(args2);
    is_list = ldf `is.list` in base;
    r4 = dyn is_list(args2);
    check L12() else D1();
  L13():
    stop = ldf stop;
    check L14() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 8 [];
  D4():
    deopt 13 [quote1];
  L12():
    goto L3(r4);
  L14():
    r6 = dyn stop("second argument must be a list");
    check L15() else D3();
  L17():
    quote2 = force? quote1;
    checkMissing(quote2);
    c1 = `as.logical`(quote2);
    if c1 then L18() else L6();
  D3():
    deopt 10 [r6];
  L6():
    goto L7();
  L7():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L15():
    goto L5();
  L18():
    lapply = ldf lapply;
    check L19() else D5();
  D5():
    deopt 16 [];
  L8(r13):
    popenv;
    return r13;
  L19():
    p1 = prom<V +>{
      args3 = ld args;
      args4 = force? args3;
      checkMissing(args4);
      return args4;
    };
    p2 = prom<V +>{
      enquote = ld enquote;
      enquote1 = force? enquote;
      checkMissing(enquote1);
      return enquote1;
    };
    r10 = dyn lapply(p1, p2);
    check L20() else D6();
  L22():
    what1 = ld what;
    check L24() else D7();
  L23():
    r12 = dyn base1(<lang do.call(what, args, envir)>);
    goto L8(r12);
  D6():
    deopt 19 [r10];
  D7():
    deopt 25 [what1];
  L20():
    st args = r10;
    goto L7();
  L24():
    what2 = force? what1;
    checkMissing(what2);
    args5 = ld args;
    check L25() else D8();
  D8():
    deopt 27 [args5];
  L25():
    args6 = force? args5;
    checkMissing(args6);
    envir1 = ld envir;
    check L26() else D9();
  D9():
    deopt 29 [envir1];
  L26():
    envir2 = force? envir1;
    checkMissing(envir2);
    do_call = ldf `do.call` in base;
    r14 = dyn do_call(what2, args6, envir2);
    check L27() else D10();
  D10():
    deopt 32 [r14];
  L27():
    goto L8(r14);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg print:cls, reg x1:*, reg x2:V, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st x = x;
    print = ldf print;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r = `^`(x2, 2.0);
      return r;
    };
    r2 = dyn print(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}