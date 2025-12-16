fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg char_expand:cls, reg locPars:*, reg locPars1:V, reg p:p(V +), reg warning:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg char_expand1:cls, reg locPars2:*, reg locPars3:V, reg p2:p(V +), reg r9:V |
    mkenv;
    r = clos `inner-967151422`;
    st `char.expand` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    st locPars = r2;
    char_expand = ldf `char.expand`;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r3 = dyn c("mean", "median", "mode");
    check L3() else D0();
  L2():
    r1 = dyn base("mean", "median", "mode");
    goto L0(r1);
  D0():
    deopt 9 [r3];
  D1():
    deopt 12 [];
  L3():
    goto L0(r3);
  L4():
    p = prom<V +>{
      locPars = ld locPars;
      locPars1 = force? locPars;
      checkMissing(locPars1);
      return locPars1;
    };
    p1 = prom<V +>{
      warning = ldf warning;
      r5 = dyn warning("Could not expand!");
      return r5;
    };
    r7 = dyn char_expand("me", p, p1);
    check L5() else D2();
  D2():
    deopt 16 [r7];
  L5():
    char_expand1 = ldf `char.expand`;
    check L6() else D3();
  D3():
    deopt 18 [];
  L6():
    p2 = prom<V +>{
      locPars2 = ld locPars;
      locPars3 = force? locPars2;
      checkMissing(locPars3);
      return locPars3;
    };
    r9 = dyn char_expand1("mo", p2);
    check L7() else D4();
  D4():
    deopt 21 [r9];
  L7():
    popenv;
    return r9;
  }
}
fun `inner-967151422`(input, target, nomatch) {
  (reg input:*, reg target:*, reg nomatch:*) -+> V { var input:*, var target:*, var nomatch:*, reg nomatch_isMissing:L, reg nomatch_orDefault:*, reg stop:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg input1:*, reg input2:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg stop1:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg input3:*, reg input4:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c7:L, reg r11:V, reg target1:*, reg target2:V, reg c8:L, reg c9:L, reg c10:V, reg r12:V, reg c12:L, reg stop2:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg input5:*, reg input6:V, reg target3:*, reg target4:V, reg charmatch:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg y:*, reg y1:V, reg anyNA:cls, reg r20:V, reg c13:L, reg eval:cls, reg nomatch1:*, reg nomatch2:V, reg p1:p(V +), reg r22:V, reg target5:*, reg target6:V, reg c14:L, reg target8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg y2:*, reg y3:V, reg __:cls, reg r24:V |
    mkenv;
    st input = input;
    st target = target;
    nomatch_isMissing = missing.0(nomatch);
    if nomatch_isMissing then L0() else L1(nomatch);
  L0():
    p = prom<V +>{
      stop = ldf stop;
      r = dyn stop("no match");
      return r;
    };
    goto L1(p);
  L1(nomatch_orDefault):
    st nomatch = nomatch_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r3):
    r5 = `!=`(r3, 1);
    c = `as.logical`(r5);
    if c then L19() else L3();
  L15():
    input1 = ld input;
    check L17() else D0();
  L16():
    r2 = dyn base(<sym input>);
    goto L2(r2);
  D0():
    deopt 2 [input1];
  L3():
    goto L4();
  L4():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L17():
    input2 = force? input1;
    checkMissing(input2);
    length = ldf length in base;
    r4 = dyn length(input2);
    check L18() else D1();
  L19():
    stop1 = ldf stop;
    check L20() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 9 [];
  L5(r9):
    c2 = `as.logical`(r9);
    if c2 then L26() else L6(c2);
  L18():
    goto L2(r4);
  L20():
    r6 = dyn stop1("'input' must have length 1");
    check L21() else D3();
  L23():
    input3 = ld input;
    check L25() else D4();
  L24():
    r8 = dyn base1(<sym input>);
    goto L5(r8);
  D3():
    deopt 11 [r6];
  D4():
    deopt 15 [input3];
  L6(c4):
    r12 = `!`(c4);
    c12 = `as.logical`(r12);
    if c12 then L31() else L8();
  L21():
    goto L4();
  L25():
    input4 = force? input3;
    checkMissing(input4);
    c1 = `is.character`(input4);
    goto L5(c1);
  L26():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L7(c7, r11):
    c9 = `as.logical`(r11);
    c10 = `&&`(c7, c9);
    goto L6(c10);
  L8():
    goto L9();
  L9():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L27():
    target1 = ld target;
    check L29() else D5();
  L28():
    r10 = dyn base2(<sym target>);
    goto L7(c2, r10);
  L31():
    stop2 = ldf stop;
    check L32() else D6();
  D5():
    deopt 19 [c2, target1];
  D6():
    deopt 25 [];
  L10(r16):
    st y = r16;
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L29():
    target2 = force? target1;
    checkMissing(target2);
    c8 = `is.character`(target2);
    goto L7(c2, c8);
  L32():
    r13 = dyn stop2("'input' and 'target' must be character vectors");
    check L33() else D7();
  L35():
    input5 = ld input;
    check L37() else D8();
  L36():
    r15 = dyn base3(<lang charmatch(input, target, NA_INT)>);
    goto L10(r15);
  D7():
    deopt 27 [r13];
  D8():
    deopt 32 [input5];
  L11(r19):
    c13 = `as.logical`(r19);
    if c13 then L44() else L12();
  L33():
    goto L9();
  L37():
    input6 = force? input5;
    checkMissing(input6);
    target3 = ld target;
    check L38() else D9();
  L40():
    y = ld y;
    check L42() else D11();
  L41():
    r18 = dyn base4(<sym y>);
    goto L11(r18);
  D9():
    deopt 34 [target3];
  D11():
    deopt 42 [y];
  L12():
    goto L13();
  L13():
    target5 = ld target;
    check L48() else D15();
  L38():
    target4 = force? target3;
    checkMissing(target4);
    charmatch = ldf charmatch in base;
    r17 = dyn charmatch(input6, target4, NA_INT);
    check L39() else D10();
  L42():
    y1 = force? y;
    checkMissing(y1);
    anyNA = ldf anyNA in base;
    r20 = dyn anyNA(y1);
    check L43() else D12();
  L44():
    eval = ldf eval;
    check L45() else D13();
  D10():
    deopt 38 [r17];
  D12():
    deopt 45 [r20];
  D13():
    deopt 47 [];
  D15():
    deopt 52 [target5];
  L39():
    goto L10(r17);
  L43():
    goto L11(r20);
  L45():
    p1 = prom<V +>{
      nomatch1 = ld nomatch;
      nomatch2 = force? nomatch1;
      checkMissing(nomatch2);
      return nomatch2;
    };
    r22 = dyn eval(p1);
    check L46() else D14();
  L48():
    target6 = force? target5;
    checkMissing(target6);
    c14 = `is.object`(target6);
    if c14 then L49() else L50(target6);
  D14():
    deopt 49 [r22];
  L14(dx1):
    popenv;
    return dx1;
  L46():
    goto L13();
  L49():
    dr = tryDispatchBuiltin.1("[", target6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(target8):
    y2 = ld y;
    check L52() else D16();
  D16():
    deopt 54 [target8, y2];
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L52():
    y3 = force? y2;
    __ = ldf `[` in base;
    r24 = dyn __(target8, y3);
    goto L14(r24);
  }
}