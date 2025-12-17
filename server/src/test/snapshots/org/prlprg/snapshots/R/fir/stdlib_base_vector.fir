fun main() {
  () -+> V { reg r:cls, reg data_frame:cls, reg p:p(V +), reg p1:p(V +), reg r3:V, reg try:cls, reg as_vector:cls, reg data_frame1:cls, reg p2:p(V +), reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg c:cls, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg x:*, reg x1:V, reg is_vector:cls, reg r16:V, reg as_vector1:cls, reg x2:*, reg x3:V, reg p6:p(V +), reg r18:V, reg all_equal:cls, reg x4:*, reg x5:V, reg p7:p(V +), reg as_vector2:cls, reg x6:*, reg x7:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg df:*, reg df1:V, reg is_list:cls, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg df2:*, reg df3:V, reg is_vector1:cls, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg df4:*, reg df5:V, reg is_vector2:cls, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg list:cls, reg r39:V, reg is_vector3:cls, reg r40:V |
    mkenv;
    r = clos inner2921563502;
    st vector = r;
    data_frame = ldf `data.frame`;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    p1 = prom<V +>{
      return <int 5, 6, 7>;
    };
    r3 = dyn data_frame[x, y](p, p1);
    check L8() else D1();
  D1():
    deopt 9 [r3];
  L8():
    st df = r3;
    try = ldf try;
    check L9() else D2();
  D2():
    deopt 12 [];
  L9():
    p5 = prom<V +>{
      as_vector = ldf `as.vector`;
      p4 = prom<V +>{
        data_frame1 = ldf `data.frame`;
        p2 = prom<V +>{
          return <int 1, 2, 3>;
        };
        p3 = prom<V +>{
          return <int 5, 6, 7>;
        };
        r6 = dyn data_frame1[x, y](p2, p3);
        return r6;
      };
      r8 = dyn as_vector[, mode](p4, "numeric");
      return r8;
    };
    r10 = dyn try(p5);
    check L10() else D3();
  D3():
    deopt 14 [r10];
  L10():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r12):
    st x = r12;
    sym1 = ldf `is.vector`;
    base1 = ldf `is.vector` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L11():
    c = ldf c in base;
    r13 = dyn c(1.0, 2.0);
    check L13() else D4();
  L12():
    r11 = dyn base[a, b](1.0, 2.0);
    goto L0(r11);
  D4():
    deopt 22 [r13];
  L1():
    as_vector1 = ldf `as.vector`;
    check L18() else D7();
  L13():
    goto L0(r13);
  L14():
    x = ld x;
    check L16() else D5();
  L15():
    r14 = dyn base1(<sym x>);
    goto L1();
  D5():
    deopt 26 [x];
  D7():
    deopt 32 [];
  L16():
    x1 = force? x;
    checkMissing(x1);
    is_vector = ldf `is.vector` in base;
    r16 = dyn is_vector(x1, "any");
    check L17() else D6();
  L18():
    p6 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r18 = dyn as_vector1(p6);
    check L19() else D8();
  D6():
    deopt 30 [r16];
  D8():
    deopt 34 [r18];
  L17():
    goto L1();
  L19():
    all_equal = ldf `all.equal`;
    check L20() else D9();
  D9():
    deopt 36 [];
  L20():
    p7 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p9 = prom<V +>{
      as_vector2 = ldf `as.vector`;
      p8 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r21 = dyn as_vector2(p8);
      return r21;
    };
    r23 = dyn all_equal(p7, p9);
    check L21() else D10();
  D10():
    deopt 39 [r23];
  L21():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L2():
    sym3 = ldf `is.vector`;
    base3 = ldf `is.vector` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L22():
    df = ld df;
    check L24() else D11();
  L23():
    r24 = dyn base2(<sym df>);
    goto L2();
  D11():
    deopt 42 [df];
  L3(r28):
    `!`(r28);
    sym4 = ldf `is.vector`;
    base4 = ldf `is.vector` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L24():
    df1 = force? df;
    checkMissing(df1);
    is_list = ldf `is.list` in base;
    r26 = dyn is_list(df1);
    check L25() else D12();
  L26():
    df2 = ld df;
    check L28() else D13();
  L27():
    r27 = dyn base3(<sym df>);
    goto L3(r27);
  D12():
    deopt 45 [r26];
  D13():
    deopt 48 [df2];
  L4(r32):
    `!`(r32);
    sym5 = ldf `is.vector`;
    base5 = ldf `is.vector` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L25():
    goto L2();
  L28():
    df3 = force? df2;
    checkMissing(df3);
    is_vector1 = ldf `is.vector` in base;
    r29 = dyn is_vector1(df3, "any");
    check L29() else D14();
  L30():
    df4 = ld df;
    check L32() else D15();
  L31():
    r31 = dyn base4[, mode](<sym df>, "list");
    goto L4(r31);
  D14():
    deopt 52 [r29];
  D15():
    deopt 56 [df4];
  L5(r36):
    popenv;
    return r36;
  L29():
    goto L3(r29);
  L32():
    df5 = force? df4;
    checkMissing(df5);
    is_vector2 = ldf `is.vector` in base;
    r33 = dyn is_vector2(df5, "list");
    check L33() else D16();
  L34():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L36() else L37();
  L35():
    r35 = dyn base5[, mode](<lang list()>, "list");
    goto L5(r35);
  D16():
    deopt 60 [r33];
  L6(r38):
    is_vector3 = ldf `is.vector` in base;
    r40 = dyn is_vector3(r38, "list");
    check L39() else D18();
  L33():
    goto L4(r33);
  L36():
    list = ldf list in base;
    r39 = dyn list();
    check L38() else D17();
  L37():
    r37 = dyn base6();
    goto L6(r37);
  D17():
    deopt 67 [r39];
  D18():
    deopt 70 [r40];
  L38():
    goto L6(r39);
  L39():
    goto L5(r40);
  }
}
fun inner2921563502(mode, length) {
  (reg mode:*, reg length:*) -+> V { var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, var length:*, reg length_isMissing:L, reg length_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg mode1:*, reg mode2:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V |
    mkenv;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0("logical") else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    length_isMissing = missing.0(length);
    if length_isMissing then L1(0) else L1(length);
  L1(length_orDefault):
    st length = length_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    mode1 = ld mode;
    check L5() else D0();
  L4():
    r = dyn base(<lang vector(mode, length)>);
    goto L2(r);
  D0():
    deopt 2 [mode1];
  L5():
    mode2 = force? mode1;
    checkMissing(mode2);
    length1 = ld length;
    check L6() else D1();
  D1():
    deopt 4 [length1];
  L6():
    length2 = force? length1;
    checkMissing(length2);
    vector = ldf vector in base;
    r2 = dyn vector(mode2, length2);
    check L7() else D2();
  D2():
    deopt 7 [r2];
  L7():
    goto L2(r2);
  }
}