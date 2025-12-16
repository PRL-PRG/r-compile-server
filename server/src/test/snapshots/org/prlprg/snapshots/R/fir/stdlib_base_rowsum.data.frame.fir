fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1952795594;
    st `rowsum.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1952795594(x, group, reorder, `na.rm`, `...`) {
  (reg x:*, reg group:*, reg reorder:*, reg na_rm:*, reg ddd:dots) -+> V { var x:*, var group:*, var reorder:*, reg reorder_isMissing:L, reg reorder_orDefault:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var `...`:dots?, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg group1:*, reg group2:V, reg length:cls, reg r7:V, reg NROW:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r9:V, reg r10:V, reg c1:L, reg stop1:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg group3:*, reg group4:V, reg anyNA:cls, reg r15:V, reg c2:L, reg warning:cls, reg r16:V, reg unique:cls, reg group5:*, reg group6:V, reg p2:p(V +), reg r19:V, reg reorder1:*, reg reorder2:V, reg c3:L, reg sort:cls, reg ugroup:*, reg ugroup1:V, reg p3:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg x5:*, reg x6:V, reg group7:*, reg group8:V, reg ugroup2:*, reg ugroup3:V, reg na_rm1:*, reg na_rm2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg ugroup4:*, reg ugroup5:V, reg as_character:cls, reg r27:V, reg rowsum_df:cls, reg r28:V |
    mkenv;
    st x = x;
    st group = group;
    reorder_isMissing = missing.0(reorder);
    if reorder_isMissing then L0(TRUE) else L0(reorder);
  L0(reorder_orDefault):
    st reorder = reorder_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L1(FALSE) else L1(na_rm);
  L1(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    st `...` = ddd;
    is_data_frame = ldf `is.data.frame`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L16() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L16():
    stop = ldf stop;
    check L17() else D2();
  D2():
    deopt 6 [];
  L4(r6):
    NROW = ldf NROW;
    check L24() else D6();
  L17():
    r3 = dyn stop("not a data frame");
    check L18() else D3();
  L20():
    group1 = ld group;
    check L22() else D4();
  L21():
    r5 = dyn base(<sym group>);
    goto L4(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 13 [group1];
  D6():
    deopt 17 [r6];
  L18():
    goto L3();
  L22():
    group2 = force? group1;
    checkMissing(group2);
    length = ldf length in base;
    r7 = dyn length(group2);
    check L23() else D5();
  L24():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn NROW(p1);
    check L25() else D7();
  D5():
    deopt 16 [r7];
  D7():
    deopt 19 [r6, r9];
  L23():
    goto L4(r7);
  L25():
    r10 = `!=`(r6, r9);
    c1 = `as.logical`(r10);
    if c1 then L26() else L5();
  L5():
    goto L6();
  L6():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    stop1 = ldf stop;
    check L27() else D8();
  D8():
    deopt 22 [];
  L7(r14):
    c2 = `as.logical`(r14);
    if c2 then L34() else L8();
  L27():
    r11 = dyn stop1("incorrect length for 'group'");
    check L28() else D9();
  L30():
    group3 = ld group;
    check L32() else D10();
  L31():
    r13 = dyn base1(<sym group>);
    goto L7(r13);
  D9():
    deopt 24 [r11];
  D10():
    deopt 29 [group3];
  L8():
    goto L9();
  L9():
    unique = ldf unique;
    check L38() else D14();
  L28():
    goto L6();
  L32():
    group4 = force? group3;
    checkMissing(group4);
    anyNA = ldf anyNA in base;
    r15 = dyn anyNA(group4);
    check L33() else D11();
  L34():
    warning = ldf warning;
    check L35() else D12();
  D11():
    deopt 32 [r15];
  D12():
    deopt 34 [];
  D14():
    deopt 40 [];
  L33():
    goto L7(r15);
  L35():
    r16 = dyn warning("missing values for 'group'");
    check L36() else D13();
  L38():
    p2 = prom<V +>{
      group5 = ld group;
      group6 = force? group5;
      checkMissing(group6);
      return group6;
    };
    r19 = dyn unique(p2);
    check L39() else D15();
  D13():
    deopt 36 [r16];
  D15():
    deopt 42 [r19];
  L36():
    goto L9();
  L39():
    st ugroup = r19;
    reorder1 = ld reorder;
    check L40() else D16();
  D16():
    deopt 44 [reorder1];
  L40():
    reorder2 = force? reorder1;
    checkMissing(reorder2);
    c3 = `as.logical`(reorder2);
    if c3 then L41() else L10();
  L10():
    goto L11();
  L11():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L41():
    sort = ldf sort;
    check L42() else D17();
  D17():
    deopt 47 [];
  L12(r24):
    popenv;
    return r24;
  L42():
    p3 = prom<V +>{
      ugroup = ld ugroup;
      ugroup1 = force? ugroup;
      checkMissing(ugroup1);
      return ugroup1;
    };
    r21 = dyn sort[, `na.last`, method](p3, TRUE, "quick");
    check L43() else D18();
  L45():
    x5 = ld x;
    check L47() else D19();
  L46():
    r23 = dyn base2(<lang rowsum_df(x, group, ugroup, na.rm, as.character(ugroup))>);
    goto L12(r23);
  D18():
    deopt 53 [r21];
  D19():
    deopt 59 [x5];
  L43():
    st ugroup = r21;
    goto L11();
  L47():
    x6 = force? x5;
    checkMissing(x6);
    group7 = ld group;
    check L48() else D20();
  D20():
    deopt 61 [group7];
  L48():
    group8 = force? group7;
    checkMissing(group8);
    ugroup2 = ld ugroup;
    check L49() else D21();
  D21():
    deopt 63 [ugroup2];
  L49():
    ugroup3 = force? ugroup2;
    checkMissing(ugroup3);
    na_rm1 = ld `na.rm`;
    check L50() else D22();
  D22():
    deopt 65 [na_rm1];
  L50():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L13(r26):
    rowsum_df = ldf rowsum_df in base;
    r28 = dyn rowsum_df(x6, group8, ugroup3, na_rm2, r26);
    check L55() else D25();
  L51():
    ugroup4 = ld ugroup;
    check L53() else D23();
  L52():
    r25 = dyn base3(<sym ugroup>);
    goto L13(r25);
  D23():
    deopt 69 [ugroup4];
  D25():
    deopt 74 [r28];
  L53():
    ugroup5 = force? ugroup4;
    checkMissing(ugroup5);
    as_character = ldf `as.character` in base;
    r27 = dyn as_character(ugroup5);
    check L54() else D24();
  L55():
    goto L12(r28);
  D24():
    deopt 72 [r27];
  L54():
    goto L13(r27);
  }
}