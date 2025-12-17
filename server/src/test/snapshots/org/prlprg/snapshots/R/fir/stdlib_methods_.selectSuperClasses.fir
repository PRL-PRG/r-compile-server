fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1594863638;
    st `.selectSuperClasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1594863638(ext, dropVirtual, namesOnly, directOnly, simpleOnly) {
  (reg ext:*, reg dropVirtual:*, reg namesOnly:*, reg directOnly:*, reg simpleOnly:*) -+> V { var ext:*, var dropVirtual:*, reg dropVirtual_isMissing:L, reg dropVirtual_orDefault:*, var namesOnly:*, reg namesOnly_isMissing:L, reg namesOnly_orDefault:*, var directOnly:*, reg directOnly_isMissing:L, reg directOnly_orDefault:*, var simpleOnly:*, reg simpleOnly_isMissing:L, reg simpleOnly_orDefault:*, reg directOnly1:*, reg directOnly2:V, reg p:p(V +), reg r1:cls, reg dropVirtual1:*, reg dropVirtual2:V, reg c:L, reg r2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg quote:cls, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg expression:cls, reg r8:V, reg directOnly3:*, reg directOnly4:V, reg c1:L, reg addCond:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg quote1:cls, reg r11:V, reg p1:p(V +), reg C:*, reg C1:V, reg p2:p(V +), reg r14:V, reg simpleOnly1:*, reg simpleOnly2:V, reg c2:L, reg addCond1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg quote2:cls, reg r18:V, reg p3:p(V +), reg C2:*, reg C3:V, reg p4:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg C4:*, reg C5:V, reg length:cls, reg r25:V, reg c3:L, reg r26:cls, reg C6:*, reg C7:V, reg l:*, reg body__:cls, reg r27:V, reg namesOnly1:*, reg namesOnly2:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg ext1:*, reg ext2:V, reg names:cls, reg r30:V, reg r31:V, reg ext3:*, reg ext4:V, reg c5:L, reg r33:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg ext5:*, reg ext6:V, reg p5:p(V +), reg F:*, reg F1:V, reg p6:p(V +), reg r36:V, reg __:cls, reg r37:V, reg namesOnly3:*, reg namesOnly4:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg ext7:*, reg ext8:V, reg names1:cls, reg r40:V, reg ext9:*, reg ext10:V |
    mkenv;
    st ext = ext;
    dropVirtual_isMissing = missing.0(dropVirtual);
    if dropVirtual_isMissing then L0(FALSE) else L0(dropVirtual);
  L0(dropVirtual_orDefault):
    st dropVirtual = dropVirtual_orDefault;
    namesOnly_isMissing = missing.0(namesOnly);
    if namesOnly_isMissing then L1(TRUE) else L1(namesOnly);
  L1(namesOnly_orDefault):
    st namesOnly = namesOnly_orDefault;
    directOnly_isMissing = missing.0(directOnly);
    if directOnly_isMissing then L2(TRUE) else L2(directOnly);
  L2(directOnly_orDefault):
    st directOnly = directOnly_orDefault;
    simpleOnly_isMissing = missing.0(simpleOnly);
    if simpleOnly_isMissing then L3() else L4(simpleOnly);
  L3():
    p = prom<V +>{
      directOnly1 = ld directOnly;
      directOnly2 = force? directOnly1;
      checkMissing(directOnly2);
      return directOnly2;
    };
    goto L4(p);
  L4(simpleOnly_orDefault):
    st simpleOnly = simpleOnly_orDefault;
    r1 = clos inner4224539485;
    st addCond = r1;
    dropVirtual1 = ld dropVirtual;
    check L20() else D0();
  D0():
    deopt 3 [dropVirtual1];
  L20():
    dropVirtual2 = force? dropVirtual1;
    checkMissing(dropVirtual2);
    c = `as.logical`(dropVirtual2);
    if c then L21() else L5();
  L5():
    sym1 = ldf expression;
    base1 = ldf expression in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L7(r6):
    st C = r6;
    directOnly3 = ld directOnly;
    check L27() else D1();
  L21():
    r2 = clos inner2501545716;
    st isVirtualExt = r2;
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  D1():
    deopt 15 [directOnly3];
  L6(r4):
    goto L7(r4);
  L22():
    quote = ldf quote in base;
    r5 = dyn quote(<lang `!`(isVirtualExt(exti))>);
    goto L6(r5);
  L23():
    r3 = dyn base(<lang `!`(isVirtualExt(exti))>);
    goto L6(r3);
  L25():
    expression = ldf expression in base;
    r8 = dyn expression();
    goto L7(r8);
  L26():
    r7 = dyn base1();
    goto L7(r7);
  L27():
    directOnly4 = force? directOnly3;
    checkMissing(directOnly4);
    c1 = `as.logical`(directOnly4);
    if c1 then L28() else L8();
  L8():
    goto L9();
  L9():
    simpleOnly1 = ld simpleOnly;
    check L32() else D4();
  L28():
    addCond = ldf addCond;
    check L29() else D2();
  D2():
    deopt 18 [];
  D4():
    deopt 25 [simpleOnly1];
  L29():
    p1 = prom<V +>{
      sym2 = ldf quote;
      base2 = ldf quote in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      quote1 = ldf quote in base;
      r11 = dyn quote1(<lang `==`(length(`@`(exti, by)), 0.0)>);
      goto L0(r11);
    L2():
      r9 = dyn base2(<lang `==`(length(`@`(exti, by)), 0.0)>);
      goto L0(r9);
    };
    p2 = prom<V +>{
      C = ld C;
      C1 = force? C;
      checkMissing(C1);
      return C1;
    };
    r14 = dyn addCond(p1, p2);
    check L30() else D3();
  L32():
    simpleOnly2 = force? simpleOnly1;
    checkMissing(simpleOnly2);
    c2 = `as.logical`(simpleOnly2);
    if c2 then L33() else L10();
  D3():
    deopt 21 [r14];
  L10():
    goto L11();
  L11():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L30():
    st C = r14;
    goto L9();
  L33():
    addCond1 = ldf addCond;
    check L34() else D5();
  D5():
    deopt 28 [];
  L12(r24):
    c3 = `as.logical`(r24);
    if c3 then L41() else L13();
  L34():
    p3 = prom<V +>{
      sym3 = ldf quote;
      base3 = ldf quote in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      quote2 = ldf quote in base;
      r18 = dyn quote2(<lang `@`(exti, simple)>);
      goto L0(r18);
    L2():
      r16 = dyn base3(<lang `@`(exti, simple)>);
      goto L0(r16);
    };
    p4 = prom<V +>{
      C2 = ld C;
      C3 = force? C2;
      checkMissing(C3);
      return C3;
    };
    r21 = dyn addCond1(p3, p4);
    check L35() else D6();
  L37():
    C4 = ld C;
    check L39() else D7();
  L38():
    r23 = dyn base4(<sym C>);
    goto L12(r23);
  D6():
    deopt 31 [r21];
  D7():
    deopt 37 [C4];
  L13():
    namesOnly3 = ld namesOnly;
    check L59() else D18();
  L35():
    st C = r21;
    goto L11();
  L39():
    C5 = force? C4;
    checkMissing(C5);
    length = ldf length in base;
    r25 = dyn length(C5);
    check L40() else D8();
  L41():
    r26 = clos inner3150295176;
    st F = r26;
    C6 = ld C;
    check L42() else D9();
  D8():
    deopt 40 [r25];
  D9():
    deopt 44 [C6];
  D18():
    deopt 70 [namesOnly3];
  L40():
    goto L12(r25);
  L42():
    C7 = force? C6;
    checkMissing(C7);
    l = ld F;
    body__ = ldf `body<-`;
    check L43() else D10();
  L59():
    namesOnly4 = force? namesOnly3;
    checkMissing(namesOnly4);
    c6 = `as.logical`(namesOnly4);
    if c6 then L60() else L18();
  D10():
    deopt 47 [C7, l, C7];
  L18():
    ext9 = ld ext;
    check L66() else D21();
  L43():
    r27 = dyn body__(l, NULL, C7);
    check L44() else D11();
  L60():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  D11():
    deopt 49 [C7, r27];
  D21():
    deopt 78 [ext9];
  L19(r39):
    popenv;
    return r39;
  L44():
    st F = r27;
    namesOnly1 = ld namesOnly;
    check L45() else D12();
  L61():
    ext7 = ld ext;
    check L63() else D19();
  L62():
    r38 = dyn base6(<sym ext>);
    goto L19(r38);
  L66():
    ext10 = force? ext9;
    checkMissing(ext10);
    popenv;
    return ext10;
  D12():
    deopt 51 [namesOnly1];
  D19():
    deopt 74 [ext7];
  L45():
    namesOnly2 = force? namesOnly1;
    checkMissing(namesOnly2);
    c4 = `as.logical`(namesOnly2);
    if c4 then L46() else L14();
  L63():
    ext8 = force? ext7;
    checkMissing(ext8);
    names1 = ldf names in base;
    r40 = dyn names1(ext8);
    check L64() else D20();
  D20():
    deopt 77 [r40];
  L14():
    ext3 = ld ext;
    check L52() else D15();
  L16(r31):
    c5 = `is.object`(r31);
    if c5 then L53() else L54(r31);
  L46():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L64():
    goto L19(r40);
  D15():
    deopt 59 [ext3];
  L15(r29):
    goto L16(r29);
  L17(dx1):
    popenv;
    return dx1;
  L47():
    ext1 = ld ext;
    check L49() else D13();
  L48():
    r28 = dyn base5(<sym ext>);
    goto L15(r28);
  L52():
    ext4 = force? ext3;
    checkMissing(ext4);
    goto L16(ext4);
  L53():
    dr = tryDispatchBuiltin.1("[", r31);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L55() else L54(dr);
  L54(r33):
    vapply = ldf vapply;
    check L56() else D16();
  D13():
    deopt 55 [ext1];
  D16():
    deopt 62 [r33];
  L49():
    ext2 = force? ext1;
    checkMissing(ext2);
    names = ldf names in base;
    r30 = dyn names(ext2);
    check L50() else D14();
  L55():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L56():
    p5 = prom<V +>{
      ext5 = ld ext;
      ext6 = force? ext5;
      checkMissing(ext6);
      return ext6;
    };
    p6 = prom<V +>{
      F = ld F;
      F1 = force? F;
      checkMissing(F1);
      return F1;
    };
    r36 = dyn vapply[, , , `USE.NAMES`](p5, p6, NA_LGL, FALSE);
    check L57() else D17();
  D14():
    deopt 58 [r30];
  D17():
    deopt 68 [r33, r36];
  L50():
    goto L15(r30);
  L57():
    __ = ldf `[` in base;
    r37 = dyn __(r33, r36);
    goto L17(r37);
  }
}
fun inner4224539485(xpr, prev) {
  (reg xpr:*, reg prev:*) -+> V { var xpr:*, var prev:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg prev1:*, reg prev2:V, reg length:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg xpr1:*, reg xpr2:V |
    mkenv;
    st xpr = xpr;
    st prev = prev;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    prev1 = ld prev;
    check L5() else D0();
  L4():
    r = dyn base(<sym prev>);
    goto L0(r);
  D0():
    deopt 2 [prev1];
  L1():
    xpr1 = ld xpr;
    check L11() else D2();
  L5():
    prev2 = force? prev1;
    checkMissing(prev2);
    length = ldf length in base;
    r2 = dyn length(prev2);
    check L6() else D1();
  L7():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [xpr1];
  L2(r4):
    popenv;
    return r4;
  L6():
    goto L0(r2);
  L8():
    substitute = ldf substitute in base;
    r5 = dyn substitute(<lang `&&`(P, N)>, <lang list(P=prev, N=xpr)>);
    goto L2(r5);
  L9():
    r3 = dyn base1(<lang `&&`(P, N)>, <lang list(P=prev, N=xpr)>);
    goto L2(r3);
  L11():
    xpr2 = force? xpr1;
    checkMissing(xpr2);
    popenv;
    return xpr2;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg __:cls, reg r:V |
    mkenv;
    st x = x;
    __ = ldf `@` in base;
    r = dyn __(<lang getClassDef(`@`(x, superClass), package=packageSlot(x))>, <sym virtual>);
    popenv;
    return r;
  }
}
fun inner3150295176(exti) {
  (reg exti:*) -+> V { var exti:* |
    mkenv;
    st exti = exti;
    popenv;
    return NULL;
  }
}