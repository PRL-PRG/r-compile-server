fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner189260234;
    st `format.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner189260234(x, trim, digits, nsmall, justify, width, `na.encode`, scientific, `big.mark`, `big.interval`, `small.mark`, `small.interval`, `decimal.mark`, `zero.print`, drop0trailing, `...`) {
  (reg x:*, reg trim:*, reg digits:*, reg nsmall:*, reg justify:*, reg width:*, reg na_encode:*, reg scientific:*, reg big_mark:*, reg big_interval:*, reg small_mark:*, reg small_interval:*, reg decimal_mark:*, reg zero_print:*, reg drop0trailing:*, reg ddd:dots) -+> V { var x:*, var trim:*, reg trim_isMissing:L, reg trim_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var nsmall:*, reg nsmall_isMissing:L, reg nsmall_orDefault:*, var justify:*, reg justify_isMissing:L, reg justify_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var width:*, reg width_isMissing:L, reg width_orDefault:*, var `na.encode`:*, reg na_encode_isMissing:L, reg na_encode_orDefault:*, var scientific:*, reg scientific_isMissing:L, reg scientific_orDefault:*, var `big.mark`:*, reg big_mark_isMissing:L, reg big_mark_orDefault:*, var `big.interval`:*, reg big_interval_isMissing:L, reg big_interval_orDefault:*, var `small.mark`:*, reg small_mark_isMissing:L, reg small_mark_orDefault:*, var `small.interval`:*, reg small_interval_isMissing:L, reg small_interval_orDefault:*, var `decimal.mark`:*, reg decimal_mark_isMissing:L, reg decimal_mark_orDefault:*, reg getOption:cls, reg r4:V, reg p1:p(V +), var `zero.print`:*, reg zero_print_isMissing:L, reg zero_print_orDefault:*, var drop0trailing:*, reg drop0trailing_isMissing:L, reg drop0trailing_orDefault:*, var `...`:dots?, reg match_arg:cls, reg justify1:*, reg justify2:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg is_list:cls, reg r10:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg missing1:cls, reg r17:V, reg c3:L, reg lapply:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r20:cls, reg p4:p(V +), reg trim1:*, reg trim2:V, reg p5:p(V +), reg digits1:*, reg digits2:V, reg p6:p(V +), reg nsmall1:*, reg nsmall2:V, reg p7:p(V +), reg justify3:*, reg justify4:V, reg p8:p(V +), reg width1:*, reg width2:V, reg p9:p(V +), reg na_encode1:*, reg na_encode2:V, reg p10:p(V +), reg scientific1:*, reg scientific2:V, reg p11:p(V +), reg big_mark1:*, reg big_mark2:V, reg p12:p(V +), reg big_interval1:*, reg big_interval2:V, reg p13:p(V +), reg small_mark1:*, reg small_mark2:V, reg p14:p(V +), reg small_interval1:*, reg small_interval2:V, reg p15:p(V +), reg decimal_mark1:*, reg decimal_mark2:V, reg p16:p(V +), reg zero_print1:*, reg zero_print2:V, reg p17:p(V +), reg drop0trailing1:*, reg drop0trailing2:V, reg p18:p(V +), reg ddd1:dots?, reg r36:V, reg vapply:cls, reg res:*, reg res1:V, reg p19:p(V +), reg paste:*, reg paste1:V, reg p20:p(V +), reg r39:V, reg mode:cls, reg x5:*, reg x6:V, reg p21:p(V +), reg r41:V, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg c18:L, reg c19:L, reg c20:L, reg i_ddd:dots, reg i:V, reg c21:L, reg c22:L, reg c23:L, reg c24:L, reg c25:L, reg c26:L, reg c27:L, reg c28:L, reg c29:L, reg c30:L, reg c31:L, reg c32:L, reg c33:L, reg c34:L, reg c35:L, reg stop:cls, reg r42:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:V, reg justify5:*, reg justify6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg c36:cls, reg r47:V, reg match:cls, reg r48:V, reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg x7:*, reg x8:V, reg trim3:*, reg trim4:V, reg digits3:*, reg digits4:V, reg nsmall3:*, reg nsmall4:V, reg width3:*, reg width4:V, reg adj:*, reg adj1:V, reg na_encode3:*, reg na_encode4:V, reg scientific3:*, reg scientific4:V, reg format:cls, reg r52:V, reg deparse:cls, reg x9:*, reg x10:V, reg p22:p(V +), reg r54:V, reg deparse1:cls, reg x11:*, reg x12:V, reg p23:p(V +), reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg x13:*, reg x14:V, reg as_character:cls, reg r59:V, reg __:cls, reg r60:V, reg r61:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg x15:*, reg x16:V, reg class:cls, reg r64:V, reg p24:p(V +), reg r66:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg r68:V, reg cl:*, reg cl1:V, reg attr:cls, reg r69:V, reg paste2:cls, reg sQuote:cls, reg cl2:*, reg cl3:V, reg p25:p(V +), reg r71:V, reg p26:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r73:V, reg r74:V, reg pkg:*, reg pkg1:V, reg c37:V, reg r75:V, reg c38:L, reg paste3:cls, reg dQuote:cls, reg pkg2:*, reg pkg3:V, reg p27:p(V +), reg r77:V, reg p28:p(V +), reg r79:V, reg p29:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r81:V, reg r82:V, reg cld:*, reg cld1:V, reg c39:V, reg r83:V, reg c40:L, reg c42:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r84:V, reg c45:L, reg r85:V, reg __1:cls, reg r86:V, reg c46:V, reg r87:V, reg c47:L, reg c48:V, reg c50:L, reg paste4:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r88:V, reg r89:V, reg sls:*, reg sls1:V, reg length:cls, reg r90:V, reg p30:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r92:V, reg r93:V, reg sls2:*, reg sls3:V, reg length1:cls, reg r94:V, reg r95:V, reg c51:L, reg p31:p(V +), reg r97:V, reg p32:p(V +), reg r99:V, reg prettyNum:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r100:V, reg r101:V, reg x17:*, reg x18:V, reg trim5:*, reg trim6:V, reg digits5:*, reg digits6:V, reg nsmall5:*, reg nsmall6:V, reg width5:*, reg width6:V, reg na_encode5:*, reg na_encode6:V, reg scientific5:*, reg scientific6:V, reg decimal_mark3:*, reg decimal_mark4:V, reg format1:cls, reg r102:V, reg p33:p(V +), reg big_mark3:*, reg big_mark4:V, reg p34:p(V +), reg big_interval3:*, reg big_interval4:V, reg p35:p(V +), reg small_mark3:*, reg small_mark4:V, reg p36:p(V +), reg small_interval3:*, reg small_interval4:V, reg p37:p(V +), reg decimal_mark5:*, reg decimal_mark6:V, reg p38:p(V +), reg decimal_mark7:*, reg decimal_mark8:V, reg p39:p(V +), reg zero_print3:*, reg zero_print4:V, reg p40:p(V +), reg drop0trailing3:*, reg drop0trailing4:V, reg p41:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r112:V, reg r113:V, reg x19:*, reg x20:V, reg c52:L, reg p42:p(V +), reg trim7:*, reg trim8:V, reg c53:L, reg p43:p(V +), reg r116:V, reg stop1:cls, reg gettextf:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r117:V, reg r118:V, reg x21:*, reg x22:V, reg class1:cls, reg r119:V, reg p44:p(V +), reg r121:V, reg p45:p(V +), reg r123:V |
    mkenv;
    st x = x;
    trim_isMissing = missing.0(trim);
    if trim_isMissing then L0(FALSE) else L0(trim);
  L0(trim_orDefault):
    st trim = trim_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L1(NULL) else L1(digits);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    nsmall_isMissing = missing.0(nsmall);
    if nsmall_isMissing then L2(0) else L2(nsmall);
  L2(nsmall_orDefault):
    st nsmall = nsmall_orDefault;
    justify_isMissing = missing.0(justify);
    if justify_isMissing then L3() else L4(justify);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("left", "right", "centre", "none");
      goto L0(r2);
    L2():
      r = dyn base("left", "right", "centre", "none");
      goto L0(r);
    };
    goto L4(p);
  L4(justify_orDefault):
    st justify = justify_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L5(NULL) else L5(width);
  L5(width_orDefault):
    st width = width_orDefault;
    na_encode_isMissing = missing.0(na_encode);
    if na_encode_isMissing then L6(TRUE) else L6(na_encode);
  L6(na_encode_orDefault):
    st `na.encode` = na_encode_orDefault;
    scientific_isMissing = missing.0(scientific);
    if scientific_isMissing then L7(NA_LGL) else L7(scientific);
  L7(scientific_orDefault):
    st scientific = scientific_orDefault;
    big_mark_isMissing = missing.0(big_mark);
    if big_mark_isMissing then L8("") else L8(big_mark);
  L8(big_mark_orDefault):
    st `big.mark` = big_mark_orDefault;
    big_interval_isMissing = missing.0(big_interval);
    if big_interval_isMissing then L9(3) else L9(big_interval);
  L9(big_interval_orDefault):
    st `big.interval` = big_interval_orDefault;
    small_mark_isMissing = missing.0(small_mark);
    if small_mark_isMissing then L10("") else L10(small_mark);
  L10(small_mark_orDefault):
    st `small.mark` = small_mark_orDefault;
    small_interval_isMissing = missing.0(small_interval);
    if small_interval_isMissing then L11(5) else L11(small_interval);
  L11(small_interval_orDefault):
    st `small.interval` = small_interval_orDefault;
    decimal_mark_isMissing = missing.0(decimal_mark);
    if decimal_mark_isMissing then L12() else L13(decimal_mark);
  L12():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r4 = dyn getOption("OutDec");
      return r4;
    };
    goto L13(p1);
  L13(decimal_mark_orDefault):
    st `decimal.mark` = decimal_mark_orDefault;
    zero_print_isMissing = missing.0(zero_print);
    if zero_print_isMissing then L14(NULL) else L14(zero_print);
  L14(zero_print_orDefault):
    st `zero.print` = zero_print_orDefault;
    drop0trailing_isMissing = missing.0(drop0trailing);
    if drop0trailing_isMissing then L15(FALSE) else L15(drop0trailing);
  L15(drop0trailing_orDefault):
    st drop0trailing = drop0trailing_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L39() else D0();
  D0():
    deopt 1 [];
  L39():
    p2 = prom<V +>{
      justify1 = ld justify;
      justify2 = force? justify1;
      checkMissing(justify2);
      return justify2;
    };
    r7 = dyn match_arg(p2);
    check L40() else D1();
  D1():
    deopt 3 [r7];
  L40():
    st justify = r7;
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L16(r9):
    c1 = `as.logical`(r9);
    if c1 then L45() else L17();
  L41():
    x1 = ld x;
    check L43() else D2();
  L42():
    r8 = dyn base1(<sym x>);
    goto L16(r8);
  D2():
    deopt 7 [x1];
  L17():
    mode = ldf mode;
    check L59() else D8();
  L43():
    x2 = force? x1;
    checkMissing(x2);
    is_list = ldf `is.list` in base;
    r10 = dyn is_list(x2);
    check L44() else D3();
  L45():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  D3():
    deopt 10 [r10];
  D8():
    deopt 73 [];
  L18(r12):
    c2 = `as.logical`(r12);
    if c2 then L48() else L19();
  L44():
    goto L16(r10);
  L46():
    missing = ldf missing in base;
    r13 = dyn missing(<sym trim>);
    goto L18(r13);
  L47():
    r11 = dyn base2(<sym trim>);
    goto L18(r11);
  L59():
    p21 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r41 = dyn mode(p21);
    check L60() else D9();
  D9():
    deopt 75 [r41];
  L19():
    goto L20();
  L20():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L48():
    st trim = TRUE;
    goto L20();
  L60():
    c4 = `is.vector`(r41, "any");
    if c4 then L61() else L62();
  L21(r16):
    c3 = `as.logical`(r16);
    if c3 then L52() else L22();
  L50():
    missing1 = ldf missing in base;
    r17 = dyn missing1(<sym justify>);
    goto L21(r17);
  L51():
    r15 = dyn base3(<sym justify>);
    goto L21(r15);
  L61():
    c5 = inherits(r41, "factor", FALSE);
    if c5 then L63() else L64();
  L62():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L22():
    goto L23();
  L23():
    lapply = ldf lapply;
    check L54() else D4();
  L52():
    st justify = "none";
    goto L23();
  L63():
    c6 = `is.character`(r41);
    if c6 then L65() else L66();
  L64():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L63();
  D4():
    deopt 28 [];
  L24():
    popenv;
    return "NULL";
  L25():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L101() else L102();
  L26():
    deparse = ldf deparse;
    check L120() else D24();
  L27():
    deparse1 = ldf deparse;
    check L123() else D26();
  L28():
    sym7 = ldf `as.character`;
    base7 = ldf `as.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L126() else L127();
  L29():
    __ = ldf `::`;
    check L131() else D30();
  L30():
    prettyNum = ldf prettyNum;
    check L141() else D37();
  L31():
    stop1 = ldf stop;
    check L144() else D39();
  L54():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p4 = prom<V +>{
      r20 = clos `inner-459644425`;
      return r20;
    };
    p5 = prom<V +>{
      trim1 = ld trim;
      trim2 = force? trim1;
      checkMissing(trim2);
      return trim2;
    };
    p6 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    p7 = prom<V +>{
      nsmall1 = ld nsmall;
      nsmall2 = force? nsmall1;
      checkMissing(nsmall2);
      return nsmall2;
    };
    p8 = prom<V +>{
      justify3 = ld justify;
      justify4 = force? justify3;
      checkMissing(justify4);
      return justify4;
    };
    p9 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      return width2;
    };
    p10 = prom<V +>{
      na_encode1 = ld `na.encode`;
      na_encode2 = force? na_encode1;
      checkMissing(na_encode2);
      return na_encode2;
    };
    p11 = prom<V +>{
      scientific1 = ld scientific;
      scientific2 = force? scientific1;
      checkMissing(scientific2);
      return scientific2;
    };
    p12 = prom<V +>{
      big_mark1 = ld `big.mark`;
      big_mark2 = force? big_mark1;
      checkMissing(big_mark2);
      return big_mark2;
    };
    p13 = prom<V +>{
      big_interval1 = ld `big.interval`;
      big_interval2 = force? big_interval1;
      checkMissing(big_interval2);
      return big_interval2;
    };
    p14 = prom<V +>{
      small_mark1 = ld `small.mark`;
      small_mark2 = force? small_mark1;
      checkMissing(small_mark2);
      return small_mark2;
    };
    p15 = prom<V +>{
      small_interval1 = ld `small.interval`;
      small_interval2 = force? small_interval1;
      checkMissing(small_interval2);
      return small_interval2;
    };
    p16 = prom<V +>{
      decimal_mark1 = ld `decimal.mark`;
      decimal_mark2 = force? decimal_mark1;
      checkMissing(decimal_mark2);
      return decimal_mark2;
    };
    p17 = prom<V +>{
      zero_print1 = ld `zero.print`;
      zero_print2 = force? zero_print1;
      checkMissing(zero_print2);
      return zero_print2;
    };
    p18 = prom<V +>{
      drop0trailing1 = ld drop0trailing;
      drop0trailing2 = force? drop0trailing1;
      checkMissing(drop0trailing2);
      return drop0trailing2;
    };
    ddd1 = ld `...`;
    r36 = dyn lapply[X, FUN, trim, digits, nsmall, justify, width, `na.encode`, scientific, `big.mark`, `big.interval`, `small.mark`, `small.interval`, `decimal.mark`, `zero.print`, drop0trailing, `...`](p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, ddd1);
    check L55() else D5();
  L65():
    c7 = `==`.6(r41, "NULL");
    if c7 then L24() else L67();
  L66():
    i_ddd = dots[r41];
    i = `as.integer`(i_ddd);
    c21 = `==`.5(i, 1);
    if c21 then L24() else L81();
  D5():
    deopt 62 [r36];
  D24():
    deopt 126 [];
  D26():
    deopt 132 [];
  D30():
    deopt 144 [];
  D37():
    deopt 169 [];
  D39():
    deopt 193 [];
  L34(r44):
    r49 = `-`(r44, 1);
    st adj = r49;
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L108() else L109();
  L37(r58):
    popenv;
    return r58;
  L55():
    st res = r36;
    vapply = ldf vapply;
    check L56() else D6();
  L67():
    c8 = `==`.6(r41, "character");
    if c8 then L25() else L68();
  L81():
    c22 = `==`.5(i, 2);
    if c22 then L25() else L82();
  L101():
    justify5 = ld justify;
    check L103() else D12();
  L102():
    r43 = dyn base4(<sym justify>, <lang c("left", "right", "centre", "none")>);
    goto L34(r43);
  L120():
    p22 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r54 = dyn deparse[, backtick](p22, TRUE);
    check L121() else D25();
  L123():
    p23 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r56 = dyn deparse1[, backtick](p23, FALSE);
    check L124() else D27();
  L126():
    x13 = ld x;
    check L128() else D28();
  L127():
    r57 = dyn base7(<sym x>);
    goto L37(r57);
  L131():
    r60 = dyn __("methods", "getClassDef");
    check L132() else D31();
  L141():
    p33 = prom<V +>{
      sym15 = ldf `.Internal`;
      base15 = ldf `.Internal` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      trim5 = ld trim;
      trim6 = force? trim5;
      checkMissing(trim6);
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      nsmall5 = ld nsmall;
      nsmall6 = force? nsmall5;
      checkMissing(nsmall6);
      width5 = ld width;
      width6 = force? width5;
      checkMissing(width6);
      na_encode5 = ld `na.encode`;
      na_encode6 = force? na_encode5;
      checkMissing(na_encode6);
      scientific5 = ld scientific;
      scientific6 = force? scientific5;
      checkMissing(scientific6);
      decimal_mark3 = ld `decimal.mark`;
      decimal_mark4 = force? decimal_mark3;
      checkMissing(decimal_mark4);
      format1 = ldf format in base;
      r102 = dyn format1(x18, trim6, digits6, nsmall6, width6, 3, na_encode6, scientific6, decimal_mark4);
      goto L0(r102);
    L2():
      r100 = dyn base15(<lang format(x, trim, digits, nsmall, width, 3, na.encode, scientific, decimal.mark)>);
      goto L0(r100);
    };
    p34 = prom<V +>{
      big_mark3 = ld `big.mark`;
      big_mark4 = force? big_mark3;
      checkMissing(big_mark4);
      return big_mark4;
    };
    p35 = prom<V +>{
      big_interval3 = ld `big.interval`;
      big_interval4 = force? big_interval3;
      checkMissing(big_interval4);
      return big_interval4;
    };
    p36 = prom<V +>{
      small_mark3 = ld `small.mark`;
      small_mark4 = force? small_mark3;
      checkMissing(small_mark4);
      return small_mark4;
    };
    p37 = prom<V +>{
      small_interval3 = ld `small.interval`;
      small_interval4 = force? small_interval3;
      checkMissing(small_interval4);
      return small_interval4;
    };
    p38 = prom<V +>{
      decimal_mark5 = ld `decimal.mark`;
      decimal_mark6 = force? decimal_mark5;
      checkMissing(decimal_mark6);
      return decimal_mark6;
    };
    p39 = prom<V +>{
      decimal_mark7 = ld `decimal.mark`;
      decimal_mark8 = force? decimal_mark7;
      checkMissing(decimal_mark8);
      return decimal_mark8;
    };
    p40 = prom<V +>{
      zero_print3 = ld `zero.print`;
      zero_print4 = force? zero_print3;
      checkMissing(zero_print4);
      return zero_print4;
    };
    p41 = prom<V +>{
      drop0trailing3 = ld drop0trailing;
      drop0trailing4 = force? drop0trailing3;
      checkMissing(drop0trailing4);
      return drop0trailing4;
    };
    p42 = prom<V +>{
      sym16 = ldf `is.complex`;
      base16 = ldf `is.complex` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r113):
      return r113;
    L1():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c52 = `is.complex`(x20);
      goto L0(c52);
    L2():
      r112 = dyn base16(<sym x>);
      goto L0(r112);
    };
    p43 = prom<V +>{
      trim7 = ld trim;
      trim8 = force? trim7;
      checkMissing(trim8);
      c53 = `as.logical`(trim8);
      if c53 then L1() else L0();
    L0():
      return "common";
    L1():
      return "individual";
    };
    r116 = dyn prettyNum[, `big.mark`, `big.interval`, `small.mark`, `small.interval`, `decimal.mark`, `input.d.mark`, `zero.print`, drop0trailing, `is.cmplx`, `preserve.width`](p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43);
    check L142() else D38();
  L144():
    p45 = prom<V +>{
      gettextf = ldf gettextf;
      p44 = prom<V +>{
        sym17 = ldf class;
        base17 = ldf class in base;
        guard17 = `==`.4(sym17, base17);
        if guard17 then L1() else L2();
      L0(r118):
        return r118;
      L1():
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        class1 = ldf class in base;
        r119 = dyn class1(x22);
        goto L0(r119);
      L2():
        r117 = dyn base17(<sym x>);
        goto L0(r117);
      };
      r121 = dyn gettextf("Found no format() method for class \"%s\"", p44);
      return r121;
    };
    r123 = dyn stop1[, domain](p45, NA_LGL);
    check L145() else D40();
  D6():
    deopt 65 [];
  D12():
    deopt 87 [justify5];
  D25():
    deopt 130 [r54];
  D27():
    deopt 136 [r56];
  D28():
    deopt 139 [x13];
  D31():
    deopt 147 [r60];
  D38():
    deopt 191 [r116];
  D40():
    deopt 197 [r123];
  L36(r51):
    popenv;
    return r51;
  L56():
    p19 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p20 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r39 = dyn vapply[, , , collapse](p19, p20, "", ", ");
    check L57() else D7();
  L68():
    c9 = `==`.6(r41, "call");
    if c9 then L26() else L69();
  L82():
    c23 = `==`.5(i, 3);
    if c23 then L32() else L83();
  L103():
    justify6 = force? justify5;
    checkMissing(justify6);
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  L108():
    x7 = ld x;
    check L110() else D15();
  L109():
    r50 = dyn base6(<lang format(x, trim, digits, nsmall, width, adj, na.encode, scientific, NA_STR)>);
    goto L36(r50);
  L121():
    popenv;
    return r54;
  L124():
    popenv;
    return r56;
  L128():
    x14 = force? x13;
    checkMissing(x14);
    as_character = ldf `as.character` in base;
    r59 = dyn as_character(x14);
    check L129() else D29();
  L132():
    checkFun.0(r60);
    r61 = r60 as cls;
    p24 = prom<V +>{
      sym8 = ldf class;
      base8 = ldf class in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r63):
      st cl = r63;
      invisible.0();
      return r63;
    L1():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      class = ldf class in base;
      r64 = dyn class(x16);
      goto L0(r64);
    L2():
      r62 = dyn base8(<sym x>);
      goto L0(r62);
    };
    r66 = dyn r61(p24);
    check L133() else D32();
  L142():
    popenv;
    return r116;
  L145():
    popenv;
    return r123;
  D7():
    deopt 71 [r39];
  D15():
    deopt 106 [x7];
  D29():
    deopt 142 [r59];
  D32():
    deopt 150 [r66];
  L32():
    stop = ldf stop;
    check L96() else D10();
  L35(r46):
    match = ldf match in base;
    r48 = dyn match(justify6, r46, NA_INT, NULL);
    check L107() else D14();
  L57():
    popenv;
    return r39;
  L69():
    c10 = `==`.6(r41, "expression");
    if c10 then L26() else L70();
  L83():
    c24 = `==`.5(i, 4);
    if c24 then L32() else L84();
  L104():
    c36 = ldf c in base;
    r47 = dyn c36("left", "right", "centre", "none");
    check L106() else D13();
  L105():
    r45 = dyn base5("left", "right", "centre", "none");
    goto L35(r45);
  L110():
    x8 = force? x7;
    checkMissing(x8);
    trim3 = ld trim;
    check L111() else D16();
  L129():
    goto L37(r59);
  L133():
    st cld = r66;
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L134() else L135();
  D10():
    deopt 77 [];
  D13():
    deopt 96 [r47];
  D14():
    deopt 100 [r48];
  D16():
    deopt 108 [trim3];
  L38(r68):
    st pkg = r68;
    paste2 = ldf paste0;
    check L138() else D35();
  L70():
    c11 = `==`.6(r41, "function");
    if c11 then L26() else L71();
  L84():
    c25 = `==`.5(i, 5);
    if c25 then L32() else L85();
  L96():
    r42 = dyn stop("empty alternative in numeric switch");
    check L97() else D11();
  L106():
    goto L35(r47);
  L107():
    goto L34(r48);
  L111():
    trim4 = force? trim3;
    checkMissing(trim4);
    digits3 = ld digits;
    check L112() else D17();
  L134():
    cl = ld cl;
    check L136() else D33();
  L135():
    r67 = dyn base9(<sym cl>, "package");
    goto L38(r67);
  D11():
    deopt 79 [r42];
  D17():
    deopt 110 [digits3];
  D33():
    deopt 154 [cl];
  D35():
    deopt 161 [];
  L71():
    c12 = `==`.6(r41, "(");
    if c12 then L26() else L72();
  L85():
    c26 = `==`.5(i, 6);
    if c26 then L26() else L86();
  L97():
    popenv;
    return r42;
  L112():
    digits4 = force? digits3;
    checkMissing(digits4);
    nsmall3 = ld nsmall;
    check L113() else D18();
  L136():
    cl1 = force? cl;
    checkMissing(cl1);
    attr = ldf attr in base;
    r69 = dyn attr(cl1, "package");
    check L137() else D34();
  L138():
    p26 = prom<V +>{
      sQuote = ldf sQuote;
      p25 = prom<V +>{
        cl2 = ld cl;
        cl3 = force? cl2;
        checkMissing(cl3);
        return cl3;
      };
      r71 = dyn sQuote(p25);
      return r71;
    };
    p29 = prom<V +>{
      sym10 = ldf `is.null`;
      base10 = ldf `is.null` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L2() else L3();
    L0(r74):
      r75 = `!`(r74);
      c38 = `as.logical`(r75);
      if c38 then L4() else L1();
    L2():
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      c37 = `==`(pkg1, NULL);
      goto L0(c37);
    L3():
      r73 = dyn base10(<sym pkg>);
      goto L0(r73);
    L1():
      invisible.0();
      return NULL;
    L4():
      paste3 = ldf paste0;
      p28 = prom<V +>{
        dQuote = ldf dQuote;
        p27 = prom<V +>{
          pkg2 = ld pkg;
          pkg3 = force? pkg2;
          checkMissing(pkg3);
          return pkg3;
        };
        r77 = dyn dQuote(p27);
        return r77;
      };
      r79 = dyn paste3(" [package ", p28, "]");
      return r79;
    };
    p32 = prom<V +>{
      sym11 = ldf `is.null`;
      base11 = ldf `is.null` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L4() else L5();
    L0(r82):
      r83 = `!`(r82);
      c40 = `as.logical`(r83);
      if c40 then L6() else L1(c40);
    L4():
      cld = ld cld;
      cld1 = force? cld;
      checkMissing(cld1);
      c39 = `==`(cld1, NULL);
      goto L0(c39);
    L5():
      r81 = dyn base11(<sym cld>);
      goto L0(r81);
    L1(c42):
      c50 = `as.logical`(c42);
      if c50 then L10() else L3();
    L6():
      sym12 = ldf `is.null`;
      base12 = ldf `is.null` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L7() else L8();
    L2(c45, r85):
      r87 = `!`(r85);
      c47 = `as.logical`(r87);
      c48 = `&&`(c45, c47);
      goto L1(c48);
    L3():
      invisible.0();
      return NULL;
    L7():
      __1 = ldf `@` in base;
      r86 = dyn __1(<sym cld>, <sym slots>);
      st sls = r86;
      c46 = `==`(r86, NULL);
      goto L2(c40, c46);
    L8():
      r84 = dyn base12(<lang `<-`(sls, `@`(cld, slots))>);
      goto L2(c40, r84);
    L10():
      paste4 = ldf paste;
      p30 = prom<V +>{
        sym13 = ldf length;
        base13 = ldf length in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r89):
        return r89;
      L1():
        sls = ld sls;
        sls1 = force? sls;
        checkMissing(sls1);
        length = ldf length in base;
        r90 = dyn length(sls1);
        goto L0(r90);
      L2():
        r88 = dyn base13(<sym sls>);
        goto L0(r88);
      };
      p31 = prom<V +>{
        sym14 = ldf length;
        base14 = ldf length in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L2() else L3();
      L0(r93):
        r95 = `==`(r93, 1);
        c51 = `as.logical`(r95);
        if c51 then L4() else L1();
      L2():
        sls2 = ld sls;
        sls3 = force? sls2;
        checkMissing(sls3);
        length1 = ldf length in base;
        r94 = dyn length1(sls3);
        goto L0(r94);
      L3():
        r92 = dyn base14(<sym sls>);
        goto L0(r92);
      L1():
        return "slots";
      L4():
        return "slot";
      };
      r97 = dyn paste4(" with", p30, p31);
      return r97;
    };
    r99 = dyn paste2("<S4 class ", p26, p29, p32, ">");
    check L139() else D36();
  D18():
    deopt 112 [nsmall3];
  D34():
    deopt 158 [r69];
  D36():
    deopt 167 [r99];
  L72():
    c13 = `==`.6(r41, "name");
    if c13 then L27() else L73();
  L86():
    c27 = `==`.5(i, 7);
    if c27 then L27() else L87();
  L113():
    nsmall4 = force? nsmall3;
    checkMissing(nsmall4);
    width3 = ld width;
    check L114() else D19();
  L137():
    goto L38(r69);
  L139():
    popenv;
    return r99;
  D19():
    deopt 114 [width3];
  L73():
    c14 = `==`.6(r41, "raw");
    if c14 then L28() else L74();
  L87():
    c28 = `==`.5(i, 8);
    if c28 then L28() else L88();
  L114():
    width4 = force? width3;
    checkMissing(width4);
    adj = ld adj;
    check L115() else D20();
  D20():
    deopt 116 [adj];
  L74():
    c15 = `==`.6(r41, "S4");
    if c15 then L29() else L75();
  L88():
    c29 = `==`.5(i, 9);
    if c29 then L29() else L89();
  L115():
    adj1 = force? adj;
    checkMissing(adj1);
    na_encode3 = ld `na.encode`;
    check L116() else D21();
  D21():
    deopt 118 [na_encode3];
  L75():
    c16 = `==`.6(r41, "numeric");
    if c16 then L30() else L76();
  L89():
    c30 = `==`.5(i, 10);
    if c30 then L32() else L90();
  L116():
    na_encode4 = force? na_encode3;
    checkMissing(na_encode4);
    scientific3 = ld scientific;
    check L117() else D22();
  D22():
    deopt 120 [scientific3];
  L76():
    c17 = `==`.6(r41, "logical");
    if c17 then L30() else L77();
  L90():
    c31 = `==`.5(i, 11);
    if c31 then L32() else L91();
  L117():
    scientific4 = force? scientific3;
    checkMissing(scientific4);
    format = ldf format in base;
    r52 = dyn format(x8, trim4, digits4, nsmall4, width4, adj1, na_encode4, scientific4, NA_STR);
    check L118() else D23();
  D23():
    deopt 124 [r52];
  L77():
    c18 = `==`.6(r41, "complex");
    if c18 then L30() else L78();
  L91():
    c32 = `==`.5(i, 12);
    if c32 then L32() else L92();
  L118():
    goto L36(r52);
  L78():
    c19 = `==`.6(r41, "externalptr");
    if c19 then L30() else L79();
  L92():
    c33 = `==`.5(i, 13);
    if c33 then L32() else L93();
  L79():
    c20 = `==`.6(r41, "environment");
    if c20 then L30() else L80();
  L93():
    c34 = `==`.5(i, 14);
    if c34 then L30() else L94();
  L80():
    goto L31();
  L94():
    c35 = `==`.5(i, 15);
    if c35 then L31() else L95();
  L95():
    invisible.0();
    popenv;
    return NULL;
  }
}
fun `inner-459644425`(xx, `...`) {
  (reg xx:*, reg ddd:dots) -+> V { var xx:*, var `...`:dots?, reg format_default:cls, reg unlist:cls, reg xx1:*, reg xx2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    st xx = xx;
    st `...` = ddd;
    format_default = ldf `format.default`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      unlist = ldf unlist;
      p = prom<V +>{
        xx1 = ld xx;
        xx2 = force? xx1;
        checkMissing(xx2);
        return xx2;
      };
      r1 = dyn unlist(p);
      return r1;
    };
    ddd1 = ld `...`;
    r3 = dyn format_default[, `...`](p1, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}