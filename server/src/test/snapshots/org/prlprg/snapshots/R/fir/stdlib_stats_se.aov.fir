fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827788318;
    st `se.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827788318(object, n, type) {
  (reg object:*, reg n:*, reg type:*) -+> V { var object:*, var n:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg r6:V, reg sum:cls, reg r7:V, reg rdf:*, reg rdf1:V, reg r8:V, reg r9:V, reg type1:*, reg type2:V, reg r10:V, reg c2:L, reg rse:*, reg rse1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg rse4:V, reg r12:V, reg n1:*, reg n2:V, reg r13:V, reg r14:V, reg type3:*, reg type4:V, reg r16:V, reg c3:L, reg lapply:cls, reg n3:*, reg n4:V, reg p:p(V +), reg r18:cls, reg p1:p(V +), reg rse5:*, reg rse6:V, reg p2:p(V +), reg r21:V, reg type5:*, reg type6:V, reg l:*, reg attr__:cls, reg r23:V, reg l1:*, reg class__:cls, reg r24:V, reg result:*, reg result1:V |
    mkenv;
    st object = object;
    st n = n;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("means") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    object1 = ld object;
    check L8() else D0();
  D0():
    deopt 0 [object1];
  L8():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L10() else L11(object2);
  L9(dx1):
    st rdf = dx1;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L10():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(object4):
    r = `$`(object4, <sym df.residual>);
    goto L9(r);
  L1(r2):
    st rse = r2;
    type1 = ld type;
    check L24() else D4();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L14():
    r1 = dyn base(<lang `/`(sum(`^`(`$`(object, residuals), 2.0)), rdf)>);
    goto L1(r1);
  D4():
    deopt 18 [type1];
  L2(r4):
    rdf = ld rdf;
    check L23() else D3();
  L15():
    object5 = ld object;
    check L17() else D1();
  L16():
    r3 = dyn base1(<lang `^`(`$`(object, residuals), 2.0)>);
    goto L2(r3);
  L24():
    type2 = force? type1;
    checkMissing(type2);
    r10 = `==`(type2, "effects");
    c2 = `as.logical`(r10);
    if c2 then L25() else L3();
  D1():
    deopt 7 [object5];
  D3():
    deopt 13 [r4, rdf];
  L3():
    goto L5();
  L5():
    type3 = ld type;
    check L31() else D7();
  L17():
    object6 = force? object5;
    checkMissing(object6);
    c1 = `is.object`(object6);
    if c1 then L19() else L20(object6);
  L23():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r8 = `/`(r4, rdf1);
    r9 = sqrt(r8);
    goto L1(r9);
  L25():
    rse = ld rse;
    check L26() else D5();
  D5():
    deopt 22 [rse];
  D7():
    deopt 31 [type3];
  L18(dx3):
    r6 = `^`(dx3, 2.0);
    sum = ldf sum in base;
    r7 = dyn sum(r6);
    check L22() else D2();
  L19():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(object8):
    r5 = `$`(object8, <sym residuals>);
    goto L18(r5);
  L26():
    rse1 = force? rse;
    checkMissing(rse1);
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L31():
    type4 = force? type3;
    checkMissing(type4);
    r16 = `==`(type4, "means");
    c3 = `as.logical`(r16);
    if c3 then L32() else L6();
  D2():
    deopt 13 [r7];
  L4(rse4, r12):
    r14 = `/`(rse4, r12);
    st result = r14;
    goto L5();
  L6():
    goto L7();
  L7():
    type5 = ld type;
    check L36() else D10();
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx2);
  L22():
    goto L2(r7);
  L27():
    n1 = ld n;
    check L29() else D6();
  L28():
    r11 = dyn base2(<sym n>);
    goto L4(rse1, r11);
  L32():
    lapply = ldf lapply;
    check L33() else D8();
  D6():
    deopt 24 [rse1, n1];
  D8():
    deopt 36 [];
  D10():
    deopt 45 [type5];
  L29():
    n2 = force? n1;
    checkMissing(n2);
    r13 = sqrt(n2);
    goto L4(rse1, r13);
  L33():
    p = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    p1 = prom<V +>{
      r18 = clos inner2359521304;
      return r18;
    };
    p2 = prom<V +>{
      rse5 = ld rse;
      rse6 = force? rse5;
      checkMissing(rse6);
      return rse6;
    };
    r21 = dyn lapply[, , d](p, p1, p2);
    check L34() else D9();
  L36():
    type6 = force? type5;
    checkMissing(type6);
    l = ld result;
    attr__ = ldf `attr<-`;
    check L37() else D11();
  D9():
    deopt 41 [r21];
  D11():
    deopt 48 [type6, l, type6];
  L34():
    st result = r21;
    goto L7();
  L37():
    r23 = dyn attr__(l, NULL, "type", type6);
    check L38() else D12();
  D12():
    deopt 51 [type6, r23];
  L38():
    st result = r23;
    l1 = ld result;
    class__ = ldf `class<-`;
    check L39() else D13();
  D13():
    deopt 56 ["mtable", l1, "mtable"];
  L39():
    r24 = dyn class__(l1, NULL, "mtable");
    check L40() else D14();
  D14():
    deopt 58 ["mtable", r24];
  L40():
    st result = r24;
    result = ld result;
    check L41() else D15();
  D15():
    deopt 60 [result];
  L41():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  }
}
fun inner2359521304(x, d) {
  (reg x:*, reg d:*) -+> V { var x:*, var d:*, reg unique:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg nn:*, reg nn1:V, reg c:L, reg nn3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg nn6:V, reg r3:V, reg nn7:*, reg nn8:V, reg is_na:cls, reg r4:V, reg r5:V, reg __:cls, reg r6:V, reg outer:cls, reg nn9:*, reg nn10:V, reg p1:p(V +), reg nn11:*, reg nn12:V, reg p2:p(V +), reg r9:cls, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg paste:cls, reg nn13:*, reg nn14:V, reg p4:p(V +), reg r15:V, reg paste1:cls, reg nn15:*, reg nn16:V, reg p5:p(V +), reg r17:V, reg list:cls, reg r18:V, reg l:*, reg dimnames__:cls, reg r19:V, reg d1:*, reg d2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg d5:V, reg r21:V, reg mat:*, reg mat1:V, reg r22:V, reg r23:V |
    mkenv;
    st x = x;
    st d = d;
    unique = ldf unique;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn unique(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st nn = r1;
    nn = ld nn;
    check L6() else D2();
  D2():
    deopt 5 [nn];
  L6():
    nn1 = force? nn;
    checkMissing(nn1);
    c = `is.object`(nn1);
    if c then L7() else L8(nn1);
  L0(dx1):
    st nn = dx1;
    outer = ldf outer;
    check L14() else D5();
  L7():
    dr = tryDispatchBuiltin.1("[", nn1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(nn3):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  D5():
    deopt 17 [];
  L1(nn6, r3):
    r5 = `!`(r3);
    __ = ldf `[` in base;
    r6 = dyn __(nn6, r5);
    goto L0(r6);
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    nn7 = ld nn;
    check L12() else D3();
  L11():
    r2 = dyn base(<sym nn>);
    goto L1(nn3, r2);
  L14():
    p1 = prom<V +>{
      nn9 = ld nn;
      nn10 = force? nn9;
      checkMissing(nn10);
      return nn10;
    };
    p2 = prom<V +>{
      nn11 = ld nn;
      nn12 = force? nn11;
      checkMissing(nn12);
      return nn12;
    };
    p3 = prom<V +>{
      r9 = clos inner799576941;
      return r9;
    };
    r11 = dyn outer(p1, p2, p3);
    check L15() else D6();
  D3():
    deopt 9 [nn3, nn7];
  D6():
    deopt 21 [r11];
  L12():
    nn8 = force? nn7;
    checkMissing(nn8);
    is_na = ldf `is.na` in base;
    r4 = dyn is_na(nn8);
    check L13() else D4();
  L15():
    st mat = r11;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D4():
    deopt 12 [nn3, r4];
  L2(r13):
    l = ld mat;
    dimnames__ = ldf `dimnames<-`;
    check L23() else D12();
  L13():
    goto L1(nn3, r4);
  L16():
    paste = ldf paste;
    check L18() else D7();
  L17():
    r12 = dyn base1(<lang paste(nn)>, <lang paste(nn)>);
    goto L2(r12);
  D7():
    deopt 26 [];
  D12():
    deopt 36 [r13, l, r13];
  L18():
    p4 = prom<V +>{
      nn13 = ld nn;
      nn14 = force? nn13;
      checkMissing(nn14);
      return nn14;
    };
    r15 = dyn paste(p4);
    check L19() else D8();
  L23():
    r19 = dyn dimnames__(l, NULL, r13);
    check L24() else D13();
  D8():
    deopt 28 [r15];
  D13():
    deopt 38 [r13, r19];
  L19():
    paste1 = ldf paste;
    check L20() else D9();
  L24():
    st mat = r19;
    d1 = ld d;
    check L25() else D14();
  D9():
    deopt 30 [];
  D14():
    deopt 40 [d1];
  L20():
    p5 = prom<V +>{
      nn15 = ld nn;
      nn16 = force? nn15;
      checkMissing(nn16);
      return nn16;
    };
    r17 = dyn paste1(p5);
    check L21() else D10();
  L25():
    d2 = force? d1;
    checkMissing(d2);
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D10():
    deopt 32 [r17];
  L3(d5, r21):
    r23 = `*`(d5, r21);
    popenv;
    return r23;
  L21():
    list = ldf list in base;
    r18 = dyn list(r15, r17);
    check L22() else D11();
  L26():
    mat = ld mat;
    check L28() else D15();
  L27():
    r20 = dyn base2(<sym mat>);
    goto L3(d2, r20);
  D11():
    deopt 34 [r18];
  D15():
    deopt 42 [d2, mat];
  L22():
    goto L2(r18);
  L28():
    mat1 = force? mat;
    checkMissing(mat1);
    r22 = sqrt(mat1);
    goto L3(d2, r22);
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg x1:*, reg x2:V, reg r:V, reg y1:*, reg y2:V, reg r1:V, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 1 [1.0, x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    r = `/`(1.0, x2);
    y1 = ld y;
    check L1() else D1();
  D1():
    deopt 4 [r, 1.0, y1];
  L1():
    y2 = force? y1;
    checkMissing(y2);
    r1 = `/`(1.0, y2);
    r2 = `+`(r, r1);
    popenv;
    return r2;
  }
}