fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4100279241;
    st `rowsum.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4100279241(x, group, reorder, `na.rm`, `...`) {
  (reg x:*, reg group:*, reg reorder:*, reg na_rm:*, reg ddd:dots) -+> V { var x:*, var group:*, var reorder:*, reg reorder_isMissing:L, reg reorder_orDefault:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg dim:cls, reg r10:V, reg length:cls, reg r11:V, reg r12:V, reg c1:L, reg stop1:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg x5:*, reg x6:V, reg is_matrix:cls, reg r17:V, reg c2:L, reg NROW:cls, reg x7:*, reg x8:V, reg p:p(V +), reg r19:V, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg x9:*, reg x10:V, reg length1:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg group1:*, reg group2:V, reg length2:cls, reg r25:V, reg nr:*, reg nr1:V, reg r26:V, reg c3:L, reg stop2:cls, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg group3:*, reg group4:V, reg anyNA:cls, reg r31:V, reg c4:L, reg warning:cls, reg r32:V, reg unique:cls, reg group5:*, reg group6:V, reg p1:p(V +), reg r35:V, reg reorder1:*, reg reorder2:V, reg c5:L, reg sort:cls, reg ugroup:*, reg ugroup1:V, reg p2:p(V +), reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg x11:*, reg x12:V, reg group7:*, reg group8:V, reg ugroup2:*, reg ugroup3:V, reg na_rm1:*, reg na_rm2:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg ugroup4:*, reg ugroup5:V, reg as_character:cls, reg r43:V, reg rowsum_matrix:cls, reg r44:V |
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
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L26() else L3();
  L22():
    x1 = ld x;
    check L24() else D0();
  L23():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    goto L4();
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L24():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(x2);
    check L25() else D1();
  L26():
    stop = ldf stop;
    check L27() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L5(r7):
    r12 = `>`(r7, 2);
    c1 = `as.logical`(r12);
    if c1 then L37() else L7();
  L25():
    goto L2(r2);
  L27():
    r4 = dyn stop("'x' must be numeric");
    check L28() else D3();
  L30():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L31():
    r6 = dyn base1(<lang dim(x)>);
    goto L5(r6);
  D3():
    deopt 10 [r4];
  L6(r9):
    length = ldf length in base;
    r11 = dyn length(r9);
    check L36() else D6();
  L7():
    goto L8();
  L8():
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L28():
    goto L4();
  L32():
    x3 = ld x;
    check L34() else D4();
  L33():
    r8 = dyn base2(<sym x>);
    goto L6(r8);
  L37():
    stop1 = ldf stop;
    check L38() else D7();
  D4():
    deopt 17 [x3];
  D6():
    deopt 22 [r11];
  D7():
    deopt 26 [];
  L9(r16):
    c2 = `as.logical`(r16);
    if c2 then L45() else L10();
  L34():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r10 = dyn dim(x4);
    check L35() else D5();
  L36():
    goto L5(r11);
  L38():
    r13 = dyn stop1("invalid 'x'");
    check L39() else D8();
  L41():
    x5 = ld x;
    check L43() else D9();
  L42():
    r15 = dyn base3(<sym x>);
    goto L9(r15);
  D5():
    deopt 20 [r10];
  D8():
    deopt 28 [r13];
  D9():
    deopt 33 [x5];
  L10():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L11(r20):
    st nr = r20;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L53() else L54();
  L35():
    goto L6(r10);
  L39():
    goto L8();
  L43():
    x6 = force? x5;
    checkMissing(x6);
    is_matrix = ldf `is.matrix` in base;
    r17 = dyn is_matrix(x6);
    check L44() else D10();
  L45():
    NROW = ldf NROW;
    check L46() else D11();
  D10():
    deopt 36 [r17];
  D11():
    deopt 38 [];
  L12(r24):
    nr = ld nr;
    check L57() else D17();
  L44():
    goto L9(r17);
  L46():
    p = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r19 = dyn NROW(p);
    check L47() else D12();
  L49():
    x9 = ld x;
    check L51() else D13();
  L50():
    r21 = dyn base4(<sym x>);
    goto L11(r21);
  L53():
    group1 = ld group;
    check L55() else D15();
  L54():
    r23 = dyn base5(<sym group>);
    goto L12(r23);
  D12():
    deopt 40 [r19];
  D13():
    deopt 43 [x9];
  D15():
    deopt 50 [group1];
  D17():
    deopt 53 [r24, nr];
  L47():
    goto L11(r19);
  L51():
    x10 = force? x9;
    checkMissing(x10);
    length1 = ldf length in base;
    r22 = dyn length1(x10);
    check L52() else D14();
  L55():
    group2 = force? group1;
    checkMissing(group2);
    length2 = ldf length in base;
    r25 = dyn length2(group2);
    check L56() else D16();
  L57():
    nr1 = force? nr;
    checkMissing(nr1);
    r26 = `!=`(r24, nr1);
    c3 = `as.logical`(r26);
    if c3 then L58() else L13();
  D14():
    deopt 46 [r22];
  D16():
    deopt 53 [r25];
  L13():
    goto L14();
  L14():
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L52():
    goto L11(r22);
  L56():
    goto L12(r25);
  L58():
    stop2 = ldf stop;
    check L59() else D18();
  D18():
    deopt 57 [];
  L15(r30):
    c4 = `as.logical`(r30);
    if c4 then L66() else L16();
  L59():
    r27 = dyn stop2("incorrect length for 'group'");
    check L60() else D19();
  L62():
    group3 = ld group;
    check L64() else D20();
  L63():
    r29 = dyn base6(<sym group>);
    goto L15(r29);
  D19():
    deopt 59 [r27];
  D20():
    deopt 64 [group3];
  L16():
    goto L17();
  L17():
    unique = ldf unique;
    check L70() else D24();
  L60():
    goto L14();
  L64():
    group4 = force? group3;
    checkMissing(group4);
    anyNA = ldf anyNA in base;
    r31 = dyn anyNA(group4);
    check L65() else D21();
  L66():
    warning = ldf warning;
    check L67() else D22();
  D21():
    deopt 67 [r31];
  D22():
    deopt 69 [];
  D24():
    deopt 75 [];
  L65():
    goto L15(r31);
  L67():
    r32 = dyn warning("missing values for 'group'");
    check L68() else D23();
  L70():
    p1 = prom<V +>{
      group5 = ld group;
      group6 = force? group5;
      checkMissing(group6);
      return group6;
    };
    r35 = dyn unique(p1);
    check L71() else D25();
  D23():
    deopt 71 [r32];
  D25():
    deopt 77 [r35];
  L68():
    goto L17();
  L71():
    st ugroup = r35;
    reorder1 = ld reorder;
    check L72() else D26();
  D26():
    deopt 79 [reorder1];
  L72():
    reorder2 = force? reorder1;
    checkMissing(reorder2);
    c5 = `as.logical`(reorder2);
    if c5 then L73() else L18();
  L18():
    goto L19();
  L19():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  L73():
    sort = ldf sort;
    check L74() else D27();
  D27():
    deopt 82 [];
  L20(r40):
    popenv;
    return r40;
  L74():
    p2 = prom<V +>{
      ugroup = ld ugroup;
      ugroup1 = force? ugroup;
      checkMissing(ugroup1);
      return ugroup1;
    };
    r37 = dyn sort[, `na.last`, method](p2, TRUE, "quick");
    check L75() else D28();
  L77():
    x11 = ld x;
    check L79() else D29();
  L78():
    r39 = dyn base7(<lang rowsum_matrix(x, group, ugroup, na.rm, as.character(ugroup))>);
    goto L20(r39);
  D28():
    deopt 88 [r37];
  D29():
    deopt 94 [x11];
  L75():
    st ugroup = r37;
    goto L19();
  L79():
    x12 = force? x11;
    checkMissing(x12);
    group7 = ld group;
    check L80() else D30();
  D30():
    deopt 96 [group7];
  L80():
    group8 = force? group7;
    checkMissing(group8);
    ugroup2 = ld ugroup;
    check L81() else D31();
  D31():
    deopt 98 [ugroup2];
  L81():
    ugroup3 = force? ugroup2;
    checkMissing(ugroup3);
    na_rm1 = ld `na.rm`;
    check L82() else D32();
  D32():
    deopt 100 [na_rm1];
  L82():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L21(r42):
    rowsum_matrix = ldf rowsum_matrix in base;
    r44 = dyn rowsum_matrix(x12, group8, ugroup3, na_rm2, r42);
    check L87() else D35();
  L83():
    ugroup4 = ld ugroup;
    check L85() else D33();
  L84():
    r41 = dyn base8(<sym ugroup>);
    goto L21(r41);
  D33():
    deopt 104 [ugroup4];
  D35():
    deopt 109 [r44];
  L85():
    ugroup5 = force? ugroup4;
    checkMissing(ugroup5);
    as_character = ldf `as.character` in base;
    r43 = dyn as_character(ugroup5);
    check L86() else D34();
  L87():
    goto L20(r44);
  D34():
    deopt 107 [r43];
  L86():
    goto L21(r43);
  }
}