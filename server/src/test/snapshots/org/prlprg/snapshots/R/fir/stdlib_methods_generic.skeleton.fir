fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2259283981;
    st `generic.skeleton` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2259283981(name, fdef, fdefault) {
  (reg name:*, reg fdef:*, reg fdefault:*) -+> V { var name:*, var fdef:*, var fdefault:*, reg formalArgs:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg lapply:cls, reg as_list:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg name1:*, reg name2:V, reg anames:*, reg anames1:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg as_name:*, reg as_name1:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg anames2:*, reg anames3:V, reg match:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg dots:*, reg dots1:V, reg is_na:cls, reg r15:V, reg r16:V, reg c1:L, reg c3:V, reg dots2:*, reg dots3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c6:L, reg dots6:V, reg r18:V, reg anames4:*, reg anames5:V, reg length:cls, reg r19:V, reg r20:V, reg c7:L, reg c8:V, reg c10:L, reg l:*, reg c11:L, reg r22:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dots7:*, reg dots8:V, reg r25:V, reg ___:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg anames6:*, reg anames7:V, reg c12:cls, reg r29:V, reg l3:*, reg names__:cls, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg fdefault1:*, reg fdefault2:V, reg c13:V, reg c14:L, reg fdef3:*, reg fdef4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg substitute:cls, reg r36:V, reg l4:*, reg body__:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg baseenv:cls, reg r40:V, reg l5:*, reg environment__:cls, reg r41:V, reg fdefault3:*, reg fdefault4:V, reg l6:*, reg c15:L, reg fdefault6:V, reg l8:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg skeleton:*, reg skeleton1:V, reg as_call:cls, reg r46:V |
    mkenv;
    st name = name;
    st fdef = fdef;
    st fdefault = fdefault;
    formalArgs = ldf formalArgs;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r1 = dyn formalArgs(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    st anames = r1;
    lapply = ldf lapply;
    check L17() else D2();
  D2():
    deopt 6 [];
  L17():
    p2 = prom<V +>{
      as_list = ldf `as.list`;
      p1 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        anames = ld anames;
        anames1 = force? anames;
        checkMissing(anames1);
        c = ldf c in base;
        r4 = dyn c(name2, anames1);
        goto L0(r4);
      L2():
        r2 = dyn base(<sym name>, <sym anames>);
        goto L0(r2);
      };
      r6 = dyn as_list(p1);
      return r6;
    };
    p3 = prom<V +>{
      as_name = ld `as.name`;
      as_name1 = force? as_name;
      checkMissing(as_name1);
      return as_name1;
    };
    r9 = dyn lapply(p2, p3);
    check L18() else D3();
  D3():
    deopt 9 [r9];
  L18():
    st skeleton = r9;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L0(r11):
    st dots = r11;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L19():
    anames2 = ld anames;
    check L21() else D4();
  L20():
    r10 = dyn base1("...", <sym anames>);
    goto L0(r10);
  D4():
    deopt 14 [anames2];
  L1(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L27() else L2(c1);
  L21():
    anames3 = force? anames2;
    checkMissing(anames3);
    match = ldf match in base;
    r12 = dyn match("...", anames3, NA_INT, NULL);
    check L22() else D5();
  L23():
    dots = ld dots;
    check L25() else D6();
  L24():
    r13 = dyn base2(<sym dots>);
    goto L1(r13);
  D5():
    deopt 19 [r12];
  D6():
    deopt 23 [dots];
  L2(c3):
    c10 = `as.logical`(c3);
    if c10 then L34() else L4();
  L22():
    goto L0(r12);
  L25():
    dots1 = force? dots;
    checkMissing(dots1);
    is_na = ldf `is.na` in base;
    r15 = dyn is_na(dots1);
    check L26() else D7();
  L27():
    dots2 = ld dots;
    check L28() else D8();
  D7():
    deopt 26 [r15];
  D8():
    deopt 28 [c1, dots2];
  L4():
    goto L7();
  L7():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L26():
    goto L1(r15);
  L28():
    dots3 = force? dots2;
    checkMissing(dots3);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L34():
    l = ld anames;
    c11 = `is.object`(l);
    if c11 then L35() else L36("", l);
  L3(c6, dots6, r18):
    r20 = `<`(dots6, r18);
    c7 = `as.logical`(r20);
    c8 = `&&`(c6, c7);
    goto L2(c8);
  L5(dx1):
    st anames = dx1;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L8(r33):
    c14 = `as.logical`(r33);
    if c14 then L49() else L9();
  L29():
    anames4 = ld anames;
    check L31() else D9();
  L30():
    r17 = dyn base3(<sym anames>);
    goto L3(c1, dots3, r17);
  L35():
    dr = tryDispatchBuiltin.0("[<-", l, "");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36("", dr);
  L36(r22, l2):
    dots7 = ld dots;
    check L38() else D11();
  L46():
    fdefault1 = ld fdefault;
    check L48() else D16();
  L47():
    r32 = dyn base5(<sym fdefault>);
    goto L8(r32);
  D9():
    deopt 31 [c1, dots3, anames4];
  D11():
    deopt 41 [r22, l2, "", 1, dots7];
  D16():
    deopt 61 [fdefault1];
  L6(r28):
    l3 = ld skeleton;
    names__ = ldf `names<-`;
    check L43() else D14();
  L9():
    goto L12();
  L12():
    fdefault3 = ld fdefault;
    check L61() else D23();
  L31():
    anames5 = force? anames4;
    checkMissing(anames5);
    length = ldf length in base;
    r19 = dyn length(anames5);
    check L32() else D10();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L38():
    dots8 = force? dots7;
    checkMissing(dots8);
    r25 = `:`(1, dots8);
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l2, "", r25);
    goto L5(r26);
  L39():
    anames6 = ld anames;
    check L41() else D12();
  L40():
    r27 = dyn base4("", <sym anames>);
    goto L6(r27);
  L48():
    fdefault2 = force? fdefault1;
    checkMissing(fdefault2);
    c13 = `==`(fdefault2, NULL);
    goto L8(c13);
  L49():
    fdef3 = ld fdef;
    check L50() else D17();
  D10():
    deopt 34 [c1, dots3, r19];
  D12():
    deopt 49 [anames6];
  D14():
    deopt 54 [r28, l3, r28];
  D17():
    deopt 64 [fdef3];
  D23():
    deopt 89 [fdefault3];
  L32():
    goto L3(c1, dots3, r19);
  L41():
    anames7 = force? anames6;
    checkMissing(anames7);
    c12 = ldf c in base;
    r29 = dyn c12("", anames7);
    check L42() else D13();
  L43():
    r30 = dyn names__(l3, NULL, r28);
    check L44() else D15();
  L50():
    fdef4 = force? fdef3;
    checkMissing(fdef4);
    st fdefault = fdef4;
    st msg = "invalid call in method dispatch to '%s' (no default method)";
    sym6 = ldf substitute;
    base6 = ldf substitute in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L51() else L52();
  L61():
    fdefault4 = force? fdefault3;
    checkMissing(fdefault4);
    l6 = ld skeleton;
    c15 = `is.object`(l6);
    if c15 then L62() else L63(fdefault4, l6);
  D13():
    deopt 52 [r29];
  D15():
    deopt 56 [r28, r30];
  L10(r35):
    l4 = ld fdefault;
    body__ = ldf `body<-`;
    check L53() else D18();
  L13(dx3):
    st skeleton = dx3;
    sym8 = ldf `as.call`;
    base8 = ldf `as.call` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L65() else L66();
  L42():
    goto L6(r29);
  L44():
    st skeleton = r30;
    goto L7();
  L51():
    substitute = ldf substitute in base;
    r36 = dyn substitute(<lang stop(gettextf(MSG, NAME), domain=NA_LGL)>, <lang list(MSG=msg, NAME=name)>);
    goto L10(r36);
  L52():
    r34 = dyn base6(<lang stop(gettextf(MSG, NAME), domain=NA_LGL)>, <lang list(MSG=msg, NAME=name)>);
    goto L10(r34);
  L62():
    dr2 = tryDispatchBuiltin.0("[[<-", l6, fdefault4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(fdefault4, dr2);
  L63(fdefault6, l8):
    ____ = ldf `[[<-` in base;
    r43 = dyn ____(l8, fdefault4, 1);
    goto L13(r43);
  D18():
    deopt 74 [r35, l4, r35];
  L14(r45):
    popenv;
    return r45;
  L53():
    r37 = dyn body__(l4, NULL, r35);
    check L54() else D19();
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L65():
    skeleton = ld skeleton;
    check L67() else D24();
  L66():
    r44 = dyn base8(<sym skeleton>);
    goto L14(r44);
  D19():
    deopt 76 [r35, r37];
  D24():
    deopt 98 [skeleton];
  L54():
    st fdefault = r37;
    sym7 = ldf baseenv;
    base7 = ldf baseenv in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L55() else L56();
  L67():
    skeleton1 = force? skeleton;
    checkMissing(skeleton1);
    as_call = ldf `as.call` in base;
    r46 = dyn as_call(skeleton1);
    check L68() else D25();
  D25():
    deopt 101 [r46];
  L11(r39):
    l5 = ld fdefault;
    environment__ = ldf `environment<-`;
    check L58() else D21();
  L55():
    baseenv = ldf baseenv in base;
    r40 = dyn baseenv();
    check L57() else D20();
  L56():
    r38 = dyn base7();
    goto L11(r38);
  L68():
    goto L14(r46);
  D20():
    deopt 81 [r40];
  D21():
    deopt 83 [r39, l5, r39];
  L57():
    goto L11(r40);
  L58():
    r41 = dyn environment__(l5, NULL, r39);
    check L59() else D22();
  D22():
    deopt 85 [r39, r41];
  L59():
    st fdefault = r41;
    goto L12();
  }
}