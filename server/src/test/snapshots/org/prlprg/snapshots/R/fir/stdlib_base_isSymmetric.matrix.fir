fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1779893473;
    st `isSymmetric.matrix` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1779893473(object, tol, tol1, `...`) {
  (reg object:*, reg tol:*, reg tol1:*, reg ddd:dots) -+> V { var object:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c:L, reg r1:R, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg r3:R, reg dx1:V, reg r4:V, reg r5:V, reg p:p(V +), var tol1:*, reg tol1_isMissing:L, reg tol1_orDefault:*, reg tol2:*, reg tol3:V, reg r7:V, reg p1:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg object1:*, reg object2:V, reg is_matrix:cls, reg r11:V, reg r12:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg object3:*, reg object4:V, reg dim:cls, reg r17:V, reg d:*, reg d1:V, reg c2:L, reg d3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r18:V, reg d4:*, reg d5:V, reg c3:L, reg dx5:V, reg d7:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __1:cls, reg r19:V, reg r20:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg object5:*, reg object6:V, reg c5:L, reg n:*, reg n1:V, reg r25:V, reg c6:L, reg c8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg c11:L, reg r27:V, reg tol4:*, reg tol5:V, reg length:cls, reg r28:V, reg c12:L, reg c13:V, reg c15:L, reg iCplx:*, reg iCplx1:V, reg c16:L, reg Conj:*, reg Conj1:V, reg Conj2:V, reg identity:*, reg identity1:V, reg unique:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg n2:*, reg n3:V, reg r31:V, reg n4:*, reg n5:V, reg c17:cls, reg r32:V, reg p2:p(V +), reg r34:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c18:L, reg x:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg i7:I, reg r36:V, reg all_equal:cls, reg object7:*, reg object8:V, reg c19:L, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg i8:*, reg i9:V, reg __2:cls, reg r37:V, reg p3:p(V +), reg Cj:cls, reg object11:*, reg object12:V, reg c20:L, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg i10:*, reg i11:V, reg __3:cls, reg r39:V, reg p4:p(V +), reg r41:V, reg p5:p(V +), reg tol6:*, reg tol7:V, reg p6:p(V +), reg ddd1:dots?, reg r44:V, reg c21:L, reg c22:L, reg iCplx2:*, reg iCplx3:V, reg c23:L, reg all_equal_numeric:cls, reg object15:*, reg object16:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg t:cls, reg object17:*, reg object18:V, reg p8:p(V +), reg r51:V, reg Conj3:cls, reg r52:V, reg p9:p(V +), reg tol8:*, reg tol9:V, reg p10:p(V +), reg ddd2:dots?, reg r55:V, reg r56:V, reg all_equal1:cls, reg object19:*, reg object20:V, reg p11:p(V +), reg t1:cls, reg object21:*, reg object22:V, reg p12:p(V +), reg r59:V, reg p13:p(V +), reg tol10:*, reg tol11:V, reg p14:p(V +), reg ddd3:dots?, reg r62:V, reg isTRUE:cls, reg test:*, reg test1:V, reg p15:p(V +), reg r64:V |
    mkenv;
    st object = object;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0() else L1(tol);
  L0():
    p = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(100.0, _Machine1);
    L0(r3, dx1):
      r5 = `*`(r3, dx1);
      return r5;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(100.0, dr);
    L2(r1, _Machine3):
      r4 = `$`(_Machine3, <sym double.eps>);
      goto L0(r1, r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(100.0, dx);
    };
    goto L1(p);
  L1(tol_orDefault):
    st tol = tol_orDefault;
    tol1_isMissing = missing.0(tol1);
    if tol1_isMissing then L2() else L3(tol1);
  L2():
    p1 = prom<V +>{
      tol2 = ld tol;
      tol3 = force? tol2;
      checkMissing(tol3);
      r7 = `*`(8.0, tol3);
      return r7;
    };
    goto L3(p1);
  L3(tol1_orDefault):
    st tol1 = tol1_orDefault;
    st `...` = ddd;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L4(r10):
    r12 = `!`(r10);
    c1 = `as.logical`(r12);
    if c1 then L30() else L5();
  L26():
    object1 = ld object;
    check L28() else D0();
  L27():
    r9 = dyn base(<sym object>);
    goto L4(r9);
  D0():
    deopt 2 [object1];
  L5():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L28():
    object2 = force? object1;
    checkMissing(object2);
    is_matrix = ldf `is.matrix` in base;
    r11 = dyn is_matrix(object2);
    check L29() else D1();
  L30():
    popenv;
    return FALSE;
  D1():
    deopt 5 [r11];
  L7(r16):
    st d = r16;
    d = ld d;
    check L37() else D4();
  L29():
    goto L4(r11);
  L33():
    object3 = ld object;
    check L35() else D2();
  L34():
    r15 = dyn base1(<sym object>);
    goto L7(r15);
  D2():
    deopt 14 [object3];
  D4():
    deopt 19 [d];
  L35():
    object4 = force? object3;
    checkMissing(object4);
    dim = ldf dim in base;
    r17 = dyn dim(object4);
    check L36() else D3();
  L37():
    d1 = force? d;
    checkMissing(d1);
    c2 = `is.object`(d1);
    if c2 then L38() else L39(d1);
  D3():
    deopt 17 [r17];
  L8(dx3):
    st n = dx3;
    d4 = ld d;
    check L41() else D5();
  L36():
    goto L7(r17);
  L38():
    dr2 = tryDispatchBuiltin.1("[", d1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(d3):
    __ = ldf `[` in base;
    r18 = dyn __(d3, 1);
    goto L8(r18);
  D5():
    deopt 24 [dx3, d4];
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L41():
    d5 = force? d4;
    checkMissing(d5);
    c3 = `is.object`(d5);
    if c3 then L42() else L43(dx3, d5);
  L9(dx8, dx9):
    r20 = `!=`(dx8, dx9);
    c4 = `as.logical`(r20);
    if c4 then L45() else L10();
  L42():
    dr4 = tryDispatchBuiltin.1("[", d5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dx3, dr4);
  L43(dx5, d7):
    __1 = ldf `[` in base;
    r19 = dyn __1(d7, 2);
    goto L9(dx5, r19);
  L10():
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L44():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx3, dx7);
  L45():
    popenv;
    return FALSE;
  L12(r24):
    st iCplx = r24;
    n = ld n;
    check L51() else D7();
  L48():
    object5 = ld object;
    check L50() else D6();
  L49():
    r23 = dyn base2(<sym object>);
    goto L12(r23);
  D6():
    deopt 36 [object5];
  D7():
    deopt 40 [n];
  L50():
    object6 = force? object5;
    checkMissing(object6);
    c5 = `is.complex`(object6);
    goto L12(c5);
  L51():
    n1 = force? n;
    checkMissing(n1);
    r25 = `>`(n1, 1);
    c6 = `as.logical`(r25);
    if c6 then L52() else L13(c6);
  L13(c8):
    c15 = `as.logical`(c8);
    if c15 then L58() else L15();
  L52():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L14(c11, r27):
    c12 = `as.logical`(r27);
    c13 = `&&`(c11, c12);
    goto L13(c13);
  L15():
    goto L23();
  L23():
    iCplx2 = ld iCplx;
    check L75() else D17();
  L53():
    tol4 = ld tol1;
    check L55() else D8();
  L54():
    r26 = dyn base3(<sym tol1>);
    goto L14(c6, r26);
  L58():
    iCplx = ld iCplx;
    check L59() else D10();
  D8():
    deopt 46 [c6, tol4];
  D10():
    deopt 51 [iCplx];
  D17():
    deopt 82 [iCplx2];
  L55():
    tol5 = force? tol4;
    checkMissing(tol5);
    length = ldf length in base;
    r28 = dyn length(tol5);
    check L56() else D9();
  L59():
    iCplx1 = force? iCplx;
    checkMissing(iCplx1);
    c16 = `as.logical`(iCplx1);
    if c16 then L60() else L16();
  L75():
    iCplx3 = force? iCplx2;
    checkMissing(iCplx3);
    c23 = `as.logical`(iCplx3);
    if c23 then L76() else L24();
  D9():
    deopt 49 [c6, r28];
  L16():
    identity = ld identity;
    check L63() else D12();
  L17(Conj2):
    st Cj = Conj2;
    unique = ldf unique;
    check L64() else D13();
  L24():
    all_equal1 = ldf `all.equal`;
    check L80() else D20();
  L25(r56):
    st test = r56;
    isTRUE = ldf isTRUE;
    check L82() else D22();
  L56():
    goto L14(c6, r28);
  L60():
    Conj = ld Conj;
    check L61() else D11();
  L76():
    all_equal_numeric = ldf `all.equal.numeric`;
    check L77() else D18();
  D11():
    deopt 53 [Conj];
  D12():
    deopt 55 [identity];
  D13():
    deopt 59 [];
  D18():
    deopt 85 [];
  D20():
    deopt 93 [];
  D22():
    deopt 102 [];
  L61():
    Conj1 = force? Conj;
    checkMissing(Conj1);
    goto L17(Conj1);
  L63():
    identity1 = force? identity;
    checkMissing(identity1);
    goto L17(identity1);
  L64():
    p2 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r31 = `-`(n3, 1);
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      c17 = ldf c in base;
      r32 = dyn c17(1, 2, r31, n5);
      goto L0(r32);
    L2():
      r29 = dyn base4(1, 2, <lang `-`(n, 1)>, <sym n>);
      goto L0(r29);
    };
    r34 = dyn unique(p2);
    check L65() else D14();
  L77():
    p7 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      return object16;
    };
    p9 = prom<V +>{
      sym6 = ldf Conj;
      base6 = ldf Conj in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      t = ldf t;
      p8 = prom<V +>{
        object17 = ld object;
        object18 = force? object17;
        checkMissing(object18);
        return object18;
      };
      r51 = dyn t(p8);
      Conj3 = ldf Conj in base;
      r52 = dyn Conj3(r51);
      goto L0(r52);
    L2():
      r48 = dyn base6(<lang t(object)>);
      goto L0(r48);
    };
    p10 = prom<V +>{
      tol8 = ld tol;
      tol9 = force? tol8;
      checkMissing(tol9);
      return tol9;
    };
    ddd2 = ld `...`;
    r55 = dyn all_equal_numeric[, , tolerance, `...`](p7, p9, p10, ddd2);
    check L78() else D19();
  L80():
    p11 = prom<V +>{
      object19 = ld object;
      object20 = force? object19;
      checkMissing(object20);
      return object20;
    };
    p13 = prom<V +>{
      t1 = ldf t;
      p12 = prom<V +>{
        object21 = ld object;
        object22 = force? object21;
        checkMissing(object22);
        return object22;
      };
      r59 = dyn t1(p12);
      return r59;
    };
    p14 = prom<V +>{
      tol10 = ld tol;
      tol11 = force? tol10;
      checkMissing(tol11);
      return tol11;
    };
    ddd3 = ld `...`;
    r62 = dyn all_equal1[, , tolerance, `...`](p11, p13, p14, ddd3);
    check L81() else D21();
  L82():
    p15 = prom<V +>{
      test = ld test;
      test1 = force? test;
      checkMissing(test1);
      return test1;
    };
    r64 = dyn isTRUE(p15);
    check L83() else D23();
  D14():
    deopt 61 [r34];
  D19():
    deopt 91 [r55];
  D21():
    deopt 99 [r62];
  D23():
    deopt 104 [r64];
  L65():
    s = toForSeq(r34);
    l = length(s);
    i = 0;
    goto L18(i);
  L78():
    goto L25(r55);
  L81():
    goto L25(r62);
  L83():
    popenv;
    return r64;
  L18(i1):
    i2 = `+`.1(i1, 1);
    c18 = `<`.1(l, i2);
    if c18 then L66() else L22();
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L66():
    goto L23();
  L19(i7, r36):
    c22 = `as.logical`(r36);
    if c22 then L71() else L20();
  L67():
    all_equal = ldf `all.equal`;
    check L69() else D15();
  L68():
    r35 = dyn base5(<lang all.equal(`[`(object, i, ), Cj(`[`(object, , i)), tolerance=tol1, ...)>);
    goto L19(i2, r35);
  D15():
    deopt 64 [i2];
  L20():
    goto L18(i7);
  L69():
    p3 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      c19 = `is.object`(object8);
      if c19 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr6 = tryDispatchBuiltin.1("[", object8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      i8 = ld i;
      i9 = force? i8;
      __2 = ldf `[` in base;
      r37 = dyn __2(object8, i9, <missing>);
      goto L0(r37);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx10);
    };
    p5 = prom<V +>{
      Cj = ldf Cj;
      p4 = prom<V +>{
        object11 = ld object;
        object12 = force? object11;
        checkMissing(object12);
        c20 = `is.object`(object12);
        if c20 then L1() else L2();
      L0(dx13):
        return dx13;
      L1():
        dr8 = tryDispatchBuiltin.1("[", object12);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2();
      L2():
        i10 = ld i;
        i11 = force? i10;
        __3 = ldf `[` in base;
        r39 = dyn __3(object12, <missing>, i11);
        goto L0(r39);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx12);
      };
      r41 = dyn Cj(p4);
      return r41;
    };
    p6 = prom<V +>{
      tol6 = ld tol1;
      tol7 = force? tol6;
      checkMissing(tol7);
      return tol7;
    };
    ddd1 = ld `...`;
    r44 = dyn all_equal[, , tolerance, `...`](p3, p5, p6, ddd1);
    check L70() else D16();
  L71():
    popenv;
    return FALSE;
  D16():
    deopt 70 [i2, r44];
  L70():
    c21 = `is.character`(r44);
    goto L19(i2, c21);
  }
}