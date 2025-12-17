fun main() {
  () -+> V { reg r:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg cbind:cls, reg x:*, reg x1:V, reg p:p(V +), reg findInterval:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg v:*, reg v1:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg round:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg seq:cls, reg p5:p(V +), reg r19:V, reg c1:cls, reg r20:V, reg findInterval1:cls, reg tt:*, reg tt1:V, reg p6:p(V +), reg X:*, reg X1:V, reg p7:p(V +), reg r23:V, reg tt2:*, reg tt3:V, reg c2:L, reg tt5:V, reg dr:V, reg dc:L, reg dx:V, reg it:*, reg it1:V, reg r24:V, reg it2:*, reg it3:V, reg N:*, reg N1:V, reg r25:V, reg r26:V, reg __:cls, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg v2:*, reg v3:V, reg length:cls, reg r30:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg findInterval2:cls, reg x4:*, reg x5:V, reg p8:p(V +), reg v4:*, reg v5:V, reg p9:p(V +), reg r35:V, reg N2:*, reg N3:V, reg findInterval3:cls, reg x6:*, reg x7:V, reg r36:V, reg p10:p(V +), reg v6:*, reg v7:V, reg c3:L, reg v9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg N4:*, reg N5:V, reg r38:V, reg __1:cls, reg r39:V, reg r40:V, reg p11:p(V +), reg r42:V, reg r43:V, reg identical:cls, reg r44:V, reg p12:p(V +), reg r46:V |
    mkenv;
    r = clos inner1953738783;
    st findInterval = r;
    r1 = `:`(2.0, 18.0);
    st x = r1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    st v = r3;
    cbind = ldf cbind;
    check L7() else D1();
  L4():
    c = ldf c in base;
    r4 = dyn c(5.0, 10.0, 15.0);
    check L6() else D0();
  L5():
    r2 = dyn base(5.0, 10.0, 15.0);
    goto L0(r2);
  D0():
    deopt 14 [r4];
  D1():
    deopt 17 [];
  L6():
    goto L0(r4);
  L7():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p3 = prom<V +>{
      findInterval = ldf findInterval;
      p1 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      p2 = prom<V +>{
        v = ld v;
        v1 = force? v;
        checkMissing(v1);
        return v1;
      };
      r8 = dyn findInterval(p1, p2);
      return r8;
    };
    r10 = dyn cbind(p, p3);
    check L8() else D2();
  D2():
    deopt 20 [r10];
  L8():
    st N = 100.0;
    sort = ldf sort;
    check L9() else D3();
  D3():
    deopt 25 [];
  L9():
    p4 = prom<V +>{
      sym1 = ldf round;
      base1 = ldf round in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      round = ldf round in base;
      r13 = dyn round(<lang `::`(stats, rt)(N, df=2.0)>, 2.0);
      goto L0(r13);
    L2():
      r11 = dyn base1(<lang `::`(stats, rt)(N, df=2.0)>, 2.0);
      goto L0(r11);
    };
    r15 = dyn sort(p4);
    check L10() else D4();
  D4():
    deopt 27 [r15];
  L10():
    st X = r15;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L1(r17):
    st tt = r17;
    findInterval1 = ldf findInterval;
    check L16() else D8();
  L11():
    seq = ldf seq;
    check L13() else D5();
  L12():
    r16 = dyn base2(<lang `-`(100.0)>, <lang seq(`-`(2.0), 2.0, length.out=201.0)>, <lang `+`(100.0)>);
    goto L1(r16);
  D5():
    deopt 34 [];
  D8():
    deopt 46 [];
  L13():
    p5 = prom<V +>{
      return -2.0;
    };
    r19 = dyn seq[, , `length.out`](p5, 2.0, 201.0);
    check L14() else D6();
  L16():
    p6 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    p7 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    r23 = dyn findInterval1(p6, p7);
    check L17() else D9();
  D6():
    deopt 39 [r19];
  D9():
    deopt 49 [r23];
  L14():
    c1 = ldf c in base;
    r20 = dyn c1(-100.0, r19, 100.0);
    check L15() else D7();
  L17():
    st it = r23;
    tt2 = ld tt;
    check L18() else D10();
  D7():
    deopt 43 [r20];
  D10():
    deopt 51 [tt2];
  L15():
    goto L1(r20);
  L18():
    tt3 = force? tt2;
    checkMissing(tt3);
    c2 = `is.object`(tt3);
    if c2 then L19() else L20(tt3);
  L2():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L19():
    dr = tryDispatchBuiltin.1("[", tt3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(tt5):
    it = ld it;
    check L22() else D11();
  D11():
    deopt 53 [tt5, it];
  L3(r29):
    st N = r29;
    stopifnot = ldf stopifnot;
    check L29() else D16();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2();
  L22():
    it1 = force? it;
    checkMissing(it1);
    r24 = `<`(it1, 1.0);
    it2 = ld it;
    check L23() else D12();
  L25():
    v2 = ld v;
    check L27() else D14();
  L26():
    r28 = dyn base3(<sym v>);
    goto L3(r28);
  D12():
    deopt 56 [tt5, r24, it2];
  D14():
    deopt 64 [v2];
  D16():
    deopt 70 [];
  L23():
    it3 = force? it2;
    checkMissing(it3);
    N = ld N;
    check L24() else D13();
  L27():
    v3 = force? v2;
    checkMissing(v3);
    length = ldf length in base;
    r30 = dyn length(v3);
    check L28() else D15();
  L29():
    p12 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      findInterval2 = ldf findInterval;
      p8 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      p9 = prom<V +>{
        v4 = ld v;
        v5 = force? v4;
        checkMissing(v5);
        return v5;
      };
      r35 = dyn findInterval2[, , `left.open`](p8, p9, TRUE);
      N2 = ld N;
      N3 = force? N2;
      checkMissing(N3);
      findInterval3 = ldf findInterval;
      p10 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        r36 = `-`(<missing>, x7);
        return r36;
      };
      p11 = prom<V +>{
        v6 = ld v;
        v7 = force? v6;
        checkMissing(v7);
        c3 = `is.object`(v7);
        if c3 then L1() else L2(v7);
      L0(dx3):
        r40 = `-`(<missing>, dx3);
        return r40;
      L1():
        dr2 = tryDispatchBuiltin.1("[", v7);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(v9):
        N4 = ld N;
        N5 = force? N4;
        checkMissing(N5);
        r38 = `:`(N5, 1.0);
        __1 = ldf `[` in base;
        r39 = dyn __1(v9, r38);
        goto L0(r39);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r42 = dyn findInterval3(p10, p11);
      r43 = `-`(N3, r42);
      identical = ldf identical in base;
      r44 = dyn identical(r35, r43, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r44);
    L2():
      r31 = dyn base4(<lang findInterval(x, v, left.open=TRUE)>, <lang `-`(N, findInterval(`-`(x), `-`(`[`(v, `:`(N, 1.0)))))>);
      goto L0(r31);
    };
    r46 = dyn stopifnot(p12);
    check L30() else D17();
  D13():
    deopt 57 [tt5, r24, it3, N];
  D15():
    deopt 67 [r30];
  D17():
    deopt 72 [r46];
  L24():
    N1 = force? N;
    checkMissing(N1);
    r25 = `>=`(it3, N1);
    r26 = `||`(r24, r25);
    __ = ldf `[` in base;
    r27 = dyn __(tt5, r26);
    goto L2();
  L28():
    goto L3(r30);
  L30():
    popenv;
    return r46;
  }
}
fun inner1953738783(x, vec, `rightmost.closed`, `all.inside`, `left.open`) {
  (reg x:*, reg vec:*, reg rightmost_closed:*, reg all_inside:*, reg left_open:*) -+> V { var x:*, var vec:*, var `rightmost.closed`:*, reg rightmost_closed_isMissing:L, reg rightmost_closed_orDefault:*, var `all.inside`:*, reg all_inside_isMissing:L, reg all_inside_orDefault:*, var `left.open`:*, reg left_open_isMissing:L, reg left_open_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg is_unsorted:cls, reg vec1:*, reg vec2:V, reg p:p(V +), reg r3:V, reg identical:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg vec3:*, reg vec4:V, reg as_double:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x1:*, reg x2:V, reg as_double1:cls, reg r15:V, reg rightmost_closed1:*, reg rightmost_closed2:V, reg all_inside1:*, reg all_inside2:V, reg left_open1:*, reg left_open2:V, reg findInterval:cls, reg r16:V |
    mkenv;
    st x = x;
    st vec = vec;
    rightmost_closed_isMissing = missing.0(rightmost_closed);
    if rightmost_closed_isMissing then L0(FALSE) else L0(rightmost_closed);
  L0(rightmost_closed_orDefault):
    st `rightmost.closed` = rightmost_closed_orDefault;
    all_inside_isMissing = missing.0(all_inside);
    if all_inside_isMissing then L1(FALSE) else L1(all_inside);
  L1(all_inside_orDefault):
    st `all.inside` = all_inside_orDefault;
    left_open_isMissing = missing.0(left_open);
    if left_open_isMissing then L2(FALSE) else L2(left_open);
  L2(left_open_orDefault):
    st `left.open` = left_open_orDefault;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L3(r1):
    r5 = `!`(r1);
    c = `as.logical`(r5);
    if c then L14() else L4();
  L9():
    is_unsorted = ldf `is.unsorted`;
    check L11() else D0();
  L10():
    r = dyn base(FALSE, <lang is.unsorted(vec)>);
    goto L3(r);
  D0():
    deopt 4 [];
  L4():
    goto L5();
  L5():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L11():
    p = prom<V +>{
      vec1 = ld vec;
      vec2 = force? vec1;
      checkMissing(vec2);
      return vec2;
    };
    r3 = dyn is_unsorted(p);
    check L12() else D1();
  L14():
    stop = ldf stop;
    check L15() else D3();
  D1():
    deopt 6 [r3];
  D3():
    deopt 18 [];
  L6(r9):
    popenv;
    return r9;
  L12():
    identical = ldf identical in base;
    r4 = dyn identical(FALSE, r3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L13() else D2();
  L15():
    r6 = dyn stop("'vec' must be sorted non-decreasingly and not contain NAs");
    check L16() else D4();
  L18():
    sym2 = ldf `as.double`;
    base2 = ldf `as.double` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L19():
    r8 = dyn base1(<lang findInterval(as.double(vec), as.double(x), rightmost.closed, all.inside, left.open)>);
    goto L6(r8);
  D2():
    deopt 15 [r4];
  D4():
    deopt 20 [r6];
  L7(r11):
    sym3 = ldf `as.double`;
    base3 = ldf `as.double` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L13():
    goto L3(r4);
  L16():
    goto L5();
  L20():
    vec3 = ld vec;
    check L22() else D5();
  L21():
    r10 = dyn base2(<sym vec>);
    goto L7(r10);
  D5():
    deopt 27 [vec3];
  L8(r14):
    rightmost_closed1 = ld `rightmost.closed`;
    check L28() else D9();
  L22():
    vec4 = force? vec3;
    checkMissing(vec4);
    as_double = ldf `as.double` in base;
    r12 = dyn as_double(vec4);
    check L23() else D6();
  L24():
    x1 = ld x;
    check L26() else D7();
  L25():
    r13 = dyn base3(<sym x>);
    goto L8(r13);
  D6():
    deopt 30 [r12];
  D7():
    deopt 33 [x1];
  D9():
    deopt 37 [rightmost_closed1];
  L23():
    goto L7(r12);
  L26():
    x2 = force? x1;
    checkMissing(x2);
    as_double1 = ldf `as.double` in base;
    r15 = dyn as_double1(x2);
    check L27() else D8();
  L28():
    rightmost_closed2 = force? rightmost_closed1;
    checkMissing(rightmost_closed2);
    all_inside1 = ld `all.inside`;
    check L29() else D10();
  D8():
    deopt 36 [r15];
  D10():
    deopt 39 [all_inside1];
  L27():
    goto L8(r15);
  L29():
    all_inside2 = force? all_inside1;
    checkMissing(all_inside2);
    left_open1 = ld `left.open`;
    check L30() else D11();
  D11():
    deopt 41 [left_open1];
  L30():
    left_open2 = force? left_open1;
    checkMissing(left_open2);
    findInterval = ldf findInterval in base;
    r16 = dyn findInterval(r11, r14, rightmost_closed2, all_inside2, left_open2);
    check L31() else D12();
  D12():
    deopt 44 [r16];
  L31():
    goto L6(r16);
  }
}