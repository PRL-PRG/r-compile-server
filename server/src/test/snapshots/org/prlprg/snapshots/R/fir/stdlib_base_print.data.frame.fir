fun main() {
  () -+> V { reg r:cls, reg data_frame:cls, reg p:p(V +), reg gl:cls, reg r2:V, reg p1:p(V +), reg letters:*, reg letters1:V, reg c:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg print:cls, reg dd:*, reg dd1:V, reg p3:p(V +), reg r8:V |
    mkenv;
    r = clos inner1767467432;
    st `print.data.frame` = r;
    data_frame = ldf `data.frame`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8>;
    };
    p1 = prom<V +>{
      gl = ldf gl;
      r2 = dyn gl(2.0, 4.0);
      return r2;
    };
    p2 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c = `is.object`(letters1);
      if c then L1() else L2(letters1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", letters1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(letters3):
      __ = ldf `[` in base;
      r4 = dyn __(letters3, <int 1, 2, 3, 4, 5, 6, 7, 8>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn data_frame[x, f, ch](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 11 [r6];
  L1():
    st dd = r6;
    print = ldf print;
    check L2() else D2();
  D2():
    deopt 14 [];
  L2():
    p3 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    r8 = dyn print[, quote, `row.names`](p3, TRUE, FALSE);
    check L3() else D3();
  D3():
    deopt 20 [r8];
  L3():
    popenv;
    return r8;
  }
}
fun inner1767467432(x, `...`, digits, quote, right, `row.names`, max) {
  (reg x:*, reg ddd:dots, reg digits:*, reg quote:*, reg right:*, reg row_names:*, reg max:*) -+> V { var x:*, var `...`:dots?, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var max:*, reg max_isMissing:L, reg max_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg row_names1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg length:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg length1:cls, reg r7:V, reg r8:V, reg c:L, reg cat:cls, reg sprintf:cls, reg ngettext:cls, reg n:*, reg n1:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg n2:*, reg n3:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:V, reg n4:*, reg n5:V, reg r17:V, reg c1:L, reg print_default:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg x5:*, reg x6:V, reg names:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg cat1:cls, reg gettext:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg max1:*, reg max2:V, reg c2:V, reg c3:L, reg getOption:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg max3:*, reg max4:V, reg is_finite:cls, reg r32:V, reg r33:V, reg c4:L, reg stop:cls, reg max5:*, reg max6:V, reg p7:p(V +), reg r35:V, reg max7:*, reg max8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg x7:*, reg x8:V, reg length2:cls, reg r39:V, reg ___:cls, reg r40:V, reg n6:*, reg n7:V, reg r41:V, reg as_matrix:cls, reg format_data_frame:cls, reg omit:*, reg omit1:V, reg c5:L, reg x9:*, reg x10:V, reg c6:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg n8:*, reg n9:V, reg r44:I, reg __:cls, reg r45:V, reg x16:*, reg x17:V, reg p8:p(V +), reg digits1:*, reg digits2:V, reg p9:p(V +), reg r48:V, reg p10:p(V +), reg r50:V, reg isTRUE:cls, reg row_names2:*, reg row_names3:V, reg p11:p(V +), reg r52:V, reg r53:V, reg c7:L, reg isFALSE:cls, reg row_names4:*, reg row_names5:V, reg p12:p(V +), reg r55:V, reg c8:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg omit2:*, reg omit3:V, reg c9:L, reg n10:*, reg n11:V, reg n12:V, reg n13:*, reg n14:V, reg rep_int:cls, reg r58:V, reg r59:V, reg row_names6:*, reg row_names7:V, reg l:*, reg dimnames:cls, reg r60:V, reg c10:L, reg r63:V, reg l2:*, reg r64:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r66:V, reg l4:*, reg dx3:V, reg ____:cls, reg r67:V, reg dimnames__:cls, reg r68:V, reg print:cls, reg m:*, reg m1:V, reg p13:p(V +), reg ddd1:dots?, reg quote1:*, reg quote2:V, reg p14:p(V +), reg right1:*, reg right2:V, reg p15:p(V +), reg max9:*, reg max10:V, reg p16:p(V +), reg r74:V, reg omit4:*, reg omit5:V, reg c11:L, reg cat2:cls, reg n15:*, reg n16:V, reg n17:*, reg n18:V, reg r75:V, reg p17:p(V +), reg r77:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg r79:V, reg x18:*, reg x19:V, reg invisible:cls, reg r80:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(NULL) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L1(FALSE) else L1(quote);
  L1(quote_orDefault):
    st quote = quote_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L2(TRUE) else L2(right);
  L2(right_orDefault):
    st right = right_orDefault;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L3(TRUE) else L3(row_names);
  L3(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    max_isMissing = missing.0(max);
    if max_isMissing then L4(NULL) else L4(max);
  L4(max_orDefault):
    st max = max_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L5(r1):
    st n = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L27():
    row_names1 = ldf `row.names`;
    check L29() else D0();
  L28():
    r = dyn base(<lang row.names(x)>);
    goto L5(r);
  D0():
    deopt 3 [];
  L6(r6):
    r8 = `==`(r6, 0);
    c = `as.logical`(r8);
    if c then L36() else L7();
  L29():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn row_names1(p);
    check L30() else D1();
  L32():
    x3 = ld x;
    check L34() else D3();
  L33():
    r5 = dyn base1(<sym x>);
    goto L6(r5);
  D1():
    deopt 5 [r3];
  D3():
    deopt 11 [x3];
  L7():
    n4 = ld n;
    check L40() else D7();
  L8():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L30():
    length = ldf length in base;
    r4 = dyn length(r3);
    check L31() else D2();
  L34():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r7 = dyn length1(x4);
    check L35() else D4();
  L36():
    cat = ldf cat;
    check L37() else D5();
  D2():
    deopt 7 [r4];
  D4():
    deopt 14 [r7];
  D5():
    deopt 18 [];
  D7():
    deopt 24 [n4];
  L26(r79):
    popenv;
    return r79;
  L31():
    goto L5(r4);
  L35():
    goto L6(r7);
  L37():
    p4 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        ngettext = ldf ngettext;
        p1 = prom<V +>{
          n = ld n;
          n1 = force? n;
          checkMissing(n1);
          return n1;
        };
        r10 = dyn ngettext(p1, "data frame with 0 columns and %d row", "data frame with 0 columns and %d rows");
        return r10;
      };
      p3 = prom<V +>{
        n2 = ld n;
        n3 = force? n2;
        checkMissing(n3);
        return n3;
      };
      r13 = dyn sprintf(p2, p3);
      return r13;
    };
    r15 = dyn cat[, , sep](p4, "\n", "");
    check L38() else D6();
  L40():
    n5 = force? n4;
    checkMissing(n5);
    r17 = `==`(n5, 0);
    c1 = `as.logical`(r17);
    if c1 then L41() else L9();
  L102():
    x18 = ld x;
    check L104() else D44();
  L103():
    r78 = dyn base8(<sym x>);
    goto L26(r78);
  D6():
    deopt 23 [r15];
  D44():
    deopt 143 [x18];
  L9():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L38():
    goto L8();
  L41():
    print_default = ldf `print.default`;
    check L42() else D8();
  L104():
    x19 = force? x18;
    checkMissing(x19);
    invisible = ldf invisible in base;
    r80 = dyn invisible(x19);
    check L105() else D45();
  D8():
    deopt 29 [];
  D45():
    deopt 146 [r80];
  L10(r27):
    c3 = `as.logical`(r27);
    if c3 then L50() else L11();
  L42():
    p5 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      names = ldf names in base;
      r20 = dyn names(x6);
      goto L0(r20);
    L2():
      r18 = dyn base2(<sym x>);
      goto L0(r18);
    };
    r22 = dyn print_default[, quote](p5, FALSE);
    check L43() else D9();
  L47():
    max1 = ld max;
    check L49() else D12();
  L48():
    r26 = dyn base3(<sym max>);
    goto L10(r26);
  L105():
    goto L26(r80);
  D9():
    deopt 33 [r22];
  D12():
    deopt 39 [max1];
  L11():
    goto L12();
  L12():
    sym4 = ldf `is.finite`;
    base4 = ldf `is.finite` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L43():
    cat1 = ldf cat;
    check L44() else D10();
  L49():
    max2 = force? max1;
    checkMissing(max2);
    c2 = `==`(max2, NULL);
    goto L10(c2);
  L50():
    getOption = ldf getOption;
    check L51() else D13();
  D10():
    deopt 35 [];
  D13():
    deopt 43 [];
  L13(r31):
    r33 = `!`(r31);
    c4 = `as.logical`(r33);
    if c4 then L58() else L14();
  L44():
    p6 = prom<V +>{
      gettext = ldf gettext;
      r23 = dyn gettext("<0 rows> (or 0-length row.names)\n");
      return r23;
    };
    r25 = dyn cat1(p6);
    check L45() else D11();
  L51():
    r28 = dyn getOption("max.print", 99999);
    check L52() else D14();
  L54():
    max3 = ld max;
    check L56() else D15();
  L55():
    r30 = dyn base4(<sym max>);
    goto L13(r30);
  D11():
    deopt 37 [r25];
  D14():
    deopt 46 [r28];
  D15():
    deopt 52 [max3];
  L14():
    goto L15();
  L15():
    max7 = ld max;
    check L62() else D19();
  L45():
    goto L8();
  L52():
    st max = r28;
    goto L12();
  L56():
    max4 = force? max3;
    checkMissing(max4);
    is_finite = ldf `is.finite` in base;
    r32 = dyn is_finite(max4);
    check L57() else D16();
  L58():
    stop = ldf stop;
    check L59() else D17();
  D16():
    deopt 55 [r32];
  D17():
    deopt 58 [];
  D19():
    deopt 65 [max7];
  L57():
    goto L13(r32);
  L59():
    p7 = prom<V +>{
      max5 = ld max;
      max6 = force? max5;
      checkMissing(max6);
      return max6;
    };
    r35 = dyn stop("invalid 'max' / getOption(\"max.print\"): ", p7);
    check L60() else D18();
  L62():
    max8 = force? max7;
    checkMissing(max8);
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  D18():
    deopt 61 [r35];
  L16(r38):
    ___ = ldf `%/%` in base;
    r40 = dyn ___(max8, r38);
    check L67() else D22();
  L60():
    goto L15();
  L63():
    x7 = ld x;
    check L65() else D20();
  L64():
    r37 = dyn base5(<sym x>);
    goto L16(r37);
  D20():
    deopt 69 [x7];
  D22():
    deopt 74 [r40];
  L65():
    x8 = force? x7;
    checkMissing(x8);
    length2 = ldf length in base;
    r39 = dyn length2(x8);
    check L66() else D21();
  L67():
    st n0 = r40;
    n6 = ld n;
    check L68() else D23();
  D21():
    deopt 72 [r39];
  D23():
    deopt 75 [r40, n6];
  L66():
    goto L16(r39);
  L68():
    n7 = force? n6;
    checkMissing(n7);
    r41 = `<`(r40, n7);
    st omit = r41;
    as_matrix = ldf `as.matrix`;
    check L69() else D24();
  D24():
    deopt 80 [];
  L69():
    p10 = prom<V +>{
      format_data_frame = ldf `format.data.frame`;
      p8 = prom<V +>{
        omit = ld omit;
        omit1 = force? omit;
        checkMissing(omit1);
        c5 = `as.logical`(omit1);
        if c5 then L3() else L0();
      L0():
        x16 = ld x;
        x17 = force? x16;
        checkMissing(x17);
        return x17;
      L3():
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c6 = `is.object`(x10);
        if c6 then L4() else L5(x10);
      L1(dx1):
        return dx1;
      L4():
        dr = tryDispatchBuiltin.1("[", x10);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(x12):
        sym6 = ldf seq_len;
        base6 = ldf seq_len in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L7() else L8();
      L2(r43):
        __ = ldf `[` in base;
        r45 = dyn __(x10, r43, <missing>, FALSE);
        goto L1(r45);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      L7():
        n8 = ld n0;
        n9 = force? n8;
        checkMissing(n9);
        r44 = seq_len(n9);
        goto L2(r44);
      L8():
        r42 = dyn base6(<sym n0>);
        goto L2(r42);
      };
      p9 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r48 = dyn format_data_frame[, digits, `na.encode`](p8, p9, FALSE);
      return r48;
    };
    r50 = dyn as_matrix(p10);
    check L70() else D25();
  D25():
    deopt 82 [r50];
  L70():
    st m = r50;
    isTRUE = ldf isTRUE;
    check L71() else D26();
  D26():
    deopt 85 [];
  L71():
    p11 = prom<V +>{
      row_names2 = ld `row.names`;
      row_names3 = force? row_names2;
      checkMissing(row_names3);
      return row_names3;
    };
    r52 = dyn isTRUE(p11);
    check L72() else D27();
  D27():
    deopt 87 [r52];
  L72():
    r53 = `!`(r52);
    c7 = `as.logical`(r53);
    if c7 then L73() else L17();
  L17():
    goto L24();
  L24():
    print = ldf print;
    check L95() else D39();
  L73():
    isFALSE = ldf isFALSE;
    check L74() else D28();
  D28():
    deopt 90 [];
  D39():
    deopt 121 [];
  L74():
    p12 = prom<V +>{
      row_names4 = ld `row.names`;
      row_names5 = force? row_names4;
      checkMissing(row_names5);
      return row_names5;
    };
    r55 = dyn isFALSE(p12);
    check L75() else D29();
  L95():
    p13 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    ddd1 = ld `...`;
    p14 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p15 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    p16 = prom<V +>{
      max9 = ld max;
      max10 = force? max9;
      checkMissing(max10);
      return max10;
    };
    r74 = dyn print[, `...`, quote, right, max](p13, ddd1, p14, p15, p16);
    check L96() else D40();
  D29():
    deopt 92 [r55];
  D40():
    deopt 130 [r74];
  L75():
    c8 = `as.logical`(r55);
    if c8 then L76() else L18();
  L96():
    omit4 = ld omit;
    check L97() else D41();
  D41():
    deopt 131 [omit4];
  L18():
    row_names6 = ld `row.names`;
    check L86() else D34();
  L22(r59):
    l = ld m;
    dimnames = ldf dimnames;
    check L87() else D35();
  L76():
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  L97():
    omit5 = force? omit4;
    checkMissing(omit5);
    c11 = `as.logical`(omit5);
    if c11 then L98() else L25();
  D34():
    deopt 104 [row_names6];
  D35():
    deopt 107 [r59, l, r59];
  L19(r57):
    goto L22(r57);
  L25():
    goto L8();
  L77():
    omit2 = ld omit;
    check L79() else D30();
  L78():
    r56 = dyn base7("", <lang if(omit, n0, n)>);
    goto L19(r56);
  L86():
    row_names7 = force? row_names6;
    checkMissing(row_names7);
    goto L22(row_names7);
  L87():
    r60 = dyn dimnames(r59, NULL);
    check L88() else D36();
  L98():
    cat2 = ldf cat;
    check L99() else D42();
  D30():
    deopt 96 [omit2];
  D36():
    deopt 109 [r59, l, r59, r60];
  D42():
    deopt 134 [];
  L79():
    omit3 = force? omit2;
    checkMissing(omit3);
    c9 = `as.logical`(omit3);
    if c9 then L80() else L20();
  L88():
    c10 = `is.object`(r60);
    if c10 then L89() else L90(r59, l, r60);
  L99():
    p17 = prom<V +>{
      n15 = ld n;
      n16 = force? n15;
      checkMissing(n16);
      n17 = ld n0;
      n18 = force? n17;
      checkMissing(n18);
      r75 = `-`(n16, n18);
      return r75;
    };
    r77 = dyn cat2(" [ reached 'max' / getOption(\"max.print\") -- omitted", p17, "rows ]\n");
    check L100() else D43();
  D43():
    deopt 138 [r77];
  L20():
    n13 = ld n;
    check L83() else D32();
  L21(n12):
    rep_int = ldf `rep.int` in base;
    r58 = dyn rep_int("", n12);
    check L84() else D33();
  L23(r66, l4, dx3):
    dimnames__ = ldf `dimnames<-`;
    check L92() else D37();
  L80():
    n10 = ld n0;
    check L81() else D31();
  L89():
    dr2 = tryDispatchBuiltin.0("[[<-", r60, r59);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L91() else L90(r59, l, dr2);
  L90(r63, l2, r64):
    ____ = ldf `[[<-` in base;
    r67 = dyn ____(r64, r59, 1);
    goto L23(r63, l2, r67);
  L100():
    goto L8();
  D31():
    deopt 98 [n10];
  D32():
    deopt 100 [n13];
  D33():
    deopt 103 [r58];
  D37():
    deopt 114 [r66, l4, dx3];
  L81():
    n11 = force? n10;
    checkMissing(n11);
    goto L21(n11);
  L83():
    n14 = force? n13;
    checkMissing(n14);
    goto L21(n14);
  L84():
    goto L19(r58);
  L91():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(r59, l, dx2);
  L92():
    r68 = dyn dimnames__(l4, NULL, dx3);
    check L93() else D38();
  D38():
    deopt 116 [r66, r68];
  L93():
    st m = r68;
    goto L24();
  }
}