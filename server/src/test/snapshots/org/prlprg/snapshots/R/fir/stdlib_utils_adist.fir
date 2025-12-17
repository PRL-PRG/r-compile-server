fun main() {
  () -+> V { reg r:cls, reg adist:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg adist1:cls, reg r6:V, reg attr:cls, reg r7:V, reg drop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg adist2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg c:cls, reg r13:V, reg p:p(V +), reg r15:V, reg attr1:cls, reg r16:V, reg adist3:cls, reg r17:V, reg adist4:cls, reg r18:V |
    mkenv;
    r = clos inner1697639068;
    st adist = r;
    adist = ldf adist;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    r1 = dyn adist("kitten", "sitting");
    check L4() else D1();
  D1():
    deopt 7 [r1];
  L4():
    sym = ldf drop;
    base = ldf drop in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L5():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r2 = dyn base(<lang attr(adist("kitten", "sitting", counts=TRUE), "counts")>);
    goto L0();
  L1(r5):
    drop = ldf drop in base;
    r8 = dyn drop(r5);
    check L12() else D5();
  L2():
    adist3 = ldf adist;
    check L18() else D9();
  L7():
    adist1 = ldf adist;
    check L9() else D2();
  L8():
    r4 = dyn base1(<lang adist("kitten", "sitting", counts=TRUE)>, "counts");
    goto L1(r4);
  L13():
    adist2 = ldf adist;
    check L15() else D6();
  L14():
    r9 = dyn base2(<lang adist(c("kitten", "sitting"), counts=TRUE)>, "trafos");
    goto L2();
  D2():
    deopt 13 [];
  D5():
    deopt 23 [r8];
  D6():
    deopt 27 [];
  D9():
    deopt 36 [];
  L9():
    r6 = dyn adist1[, , counts]("kitten", "sitting", TRUE);
    check L10() else D3();
  L12():
    goto L0();
  L15():
    p = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c = ldf c in base;
      r13 = dyn c("kitten", "sitting");
      goto L0(r13);
    L2():
      r11 = dyn base3("kitten", "sitting");
      goto L0(r11);
    };
    r15 = dyn adist2[, counts](p, TRUE);
    check L16() else D7();
  L18():
    r17 = dyn adist3("lasy", "1 lazy 2");
    check L19() else D10();
  D3():
    deopt 18 [r6];
  D7():
    deopt 31 [r15];
  D10():
    deopt 39 [r17];
  L10():
    attr = ldf attr in base;
    r7 = dyn attr(r6, "counts");
    check L11() else D4();
  L16():
    attr1 = ldf attr in base;
    r16 = dyn attr1(r15, "trafos");
    check L17() else D8();
  L19():
    adist4 = ldf adist;
    check L20() else D11();
  D4():
    deopt 21 [r7];
  D8():
    deopt 34 [r16];
  D11():
    deopt 41 [];
  L11():
    goto L1(r7);
  L17():
    goto L2();
  L20():
    r18 = dyn adist4[, , partial]("lasy", "1 lazy 2", TRUE);
    check L21() else D12();
  D12():
    deopt 46 [r18];
  L21():
    popenv;
    return r18;
  }
}
fun inner1697639068(x, y, costs, counts, fixed, partial, `ignore.case`, useBytes) {
  (reg x:*, reg y:*, reg costs:*, reg counts:*, reg fixed:*, reg partial:*, reg ignore_case:*, reg useBytes:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var costs:*, reg costs_isMissing:L, reg costs_orDefault:*, var counts:*, reg counts_isMissing:L, reg counts_orDefault:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var partial:*, reg partial_isMissing:L, reg partial_orDefault:*, reg fixed1:*, reg fixed2:V, reg r:V, reg p:p(V +), var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg r2:cls, reg _amatch_costs:cls, reg costs1:*, reg costs2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg names:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg as_character:cls, reg r10:V, reg nmx:*, reg nmx1:V, reg l:*, reg names__:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg y1:*, reg y2:V, reg c:V, reg r14:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg y3:*, reg y4:V, reg names1:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg y5:*, reg y6:V, reg as_character1:cls, reg r20:V, reg nmy:*, reg nmy1:V, reg l1:*, reg names__1:cls, reg r21:V, reg isFALSE:cls, reg fixed3:*, reg fixed4:V, reg p2:p(V +), reg r23:V, reg r24:V, reg c2:L, reg c4:V, reg isTRUE:cls, reg partial1:*, reg partial2:V, reg p3:p(V +), reg r26:V, reg r27:V, reg c5:L, reg c6:V, reg c8:L, reg Encoding:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r29:V, reg isTRUE1:cls, reg useBytes1:*, reg useBytes2:V, reg p5:p(V +), reg r31:V, reg c9:L, reg c10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg c14:L, reg r33:V, reg ex:*, reg ex1:V, reg r34:V, reg any:cls, reg r35:V, reg c15:L, reg c16:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg y7:*, reg y8:V, reg c18:V, reg r38:V, reg c19:L, reg Encoding1:cls, reg y9:*, reg y10:V, reg p6:p(V +), reg r40:V, reg useBytes3:*, reg useBytes4:V, reg c20:L, reg c21:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg c25:L, reg r42:V, reg ey:*, reg ey1:V, reg r43:V, reg any1:cls, reg r44:V, reg c26:L, reg c27:V, reg useBytes5:*, reg useBytes6:V, reg c30:L, reg lapply:cls, reg x7:*, reg x8:V, reg p7:p(V +), reg bytesToInt:*, reg bytesToInt1:V, reg p8:p(V +), reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg y11:*, reg y12:V, reg c31:V, reg c32:L, reg x9:*, reg x10:V, reg x11:V, reg lapply1:cls, reg y13:*, reg y14:V, reg p9:p(V +), reg bytesToInt2:*, reg bytesToInt3:V, reg p10:p(V +), reg r52:V, reg x12:V, reg isTRUE2:cls, reg ignore_case1:*, reg ignore_case2:V, reg p11:p(V +), reg r54:V, reg ignore_case3:*, reg ignore_case4:V, reg c33:L, reg lapply2:cls, reg tolower:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg x13:*, reg x14:V, reg enc2utf8:cls, reg r57:V, reg p12:p(V +), reg r59:V, reg p13:p(V +), reg utf8ToInt:*, reg utf8ToInt1:V, reg p14:p(V +), reg r62:V, reg r63:V, reg lapply3:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r64:V, reg r65:V, reg x15:*, reg x16:V, reg enc2utf9:cls, reg r66:V, reg p15:p(V +), reg utf8ToInt2:*, reg utf8ToInt3:V, reg p16:p(V +), reg r69:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg y15:*, reg y16:V, reg c34:V, reg c35:L, reg x17:*, reg x18:V, reg x19:V, reg ignore_case5:*, reg ignore_case6:V, reg c36:L, reg lapply4:cls, reg tolower1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r72:V, reg r73:V, reg y17:*, reg y18:V, reg enc2utf10:cls, reg r74:V, reg p17:p(V +), reg r76:V, reg p18:p(V +), reg utf8ToInt4:*, reg utf8ToInt5:V, reg p19:p(V +), reg r79:V, reg lapply5:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg r81:V, reg y19:*, reg y20:V, reg enc2utf11:cls, reg r82:V, reg p20:p(V +), reg utf8ToInt6:*, reg utf8ToInt7:V, reg p21:p(V +), reg r85:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r86:V, reg r87:V, reg y21:*, reg y22:V, reg c37:V, reg c38:L, reg x21:*, reg x22:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg r89:V, reg costs3:*, reg costs4:V, reg as_integer:cls, reg r90:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r91:V, reg r92:V, reg x24:*, reg x25:V, reg y23:*, reg y24:V, reg costs5:*, reg costs6:V, reg counts1:*, reg counts2:V, reg fixed5:*, reg fixed6:V, reg partial3:*, reg partial4:V, reg ignore_case7:*, reg ignore_case8:V, reg useBytes7:*, reg useBytes8:V, reg adist:cls, reg r93:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    costs_isMissing = missing.0(costs);
    if costs_isMissing then L1(NULL) else L1(costs);
  L1(costs_orDefault):
    st costs = costs_orDefault;
    counts_isMissing = missing.0(counts);
    if counts_isMissing then L2(FALSE) else L2(counts);
  L2(counts_orDefault):
    st counts = counts_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L3(TRUE) else L3(fixed);
  L3(fixed_orDefault):
    st fixed = fixed_orDefault;
    partial_isMissing = missing.0(partial);
    if partial_isMissing then L4() else L5(partial);
  L4():
    p = prom<V +>{
      fixed1 = ld fixed;
      fixed2 = force? fixed1;
      checkMissing(fixed2);
      r = `!`(fixed2);
      return r;
    };
    goto L5(p);
  L5(partial_orDefault):
    st partial = partial_orDefault;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L6(FALSE) else L6(ignore_case);
  L6(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L7(FALSE) else L7(useBytes);
  L7(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    r2 = clos inner2501545716;
    st bytesToInt = r2;
    _amatch_costs = ldf `.amatch_costs`;
    check L41() else D0();
  D0():
    deopt 4 [];
  L41():
    p1 = prom<V +>{
      costs1 = ld costs;
      costs2 = force? costs1;
      checkMissing(costs2);
      return costs2;
    };
    r4 = dyn _amatch_costs(p1);
    check L42() else D1();
  D1():
    deopt 6 [r4];
  L42():
    st costs = r4;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L8(r6):
    st nmx = r6;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L43():
    x1 = ld x;
    check L45() else D2();
  L44():
    r5 = dyn base(<sym x>);
    goto L8(r5);
  D2():
    deopt 10 [x1];
  L9(r9):
    st x = r9;
    nmx = ld nmx;
    check L51() else D6();
  L45():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r7 = dyn names(x2);
    check L46() else D3();
  L47():
    x3 = ld x;
    check L49() else D4();
  L48():
    r8 = dyn base1(<sym x>);
    goto L9(r8);
  D3():
    deopt 13 [r7];
  D4():
    deopt 17 [x3];
  D6():
    deopt 22 [nmx];
  L46():
    goto L8(r7);
  L49():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r10 = dyn as_character(x4);
    check L50() else D5();
  L51():
    nmx1 = force? nmx;
    checkMissing(nmx1);
    l = ld x;
    names__ = ldf `names<-`;
    check L52() else D7();
  D5():
    deopt 20 [r10];
  D7():
    deopt 25 [nmx1, l, nmx1];
  L50():
    goto L9(r10);
  L52():
    r11 = dyn names__(l, NULL, nmx1);
    check L53() else D8();
  D8():
    deopt 27 [nmx1, r11];
  L53():
    st x = r11;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L10(r13):
    r14 = `!`(r13);
    c1 = `as.logical`(r14);
    if c1 then L57() else L11();
  L54():
    y1 = ld y;
    check L56() else D9();
  L55():
    r12 = dyn base2(<sym y>);
    goto L10(r12);
  D9():
    deopt 30 [y1];
  L11():
    goto L14();
  L14():
    isFALSE = ldf isFALSE;
    check L70() else D17();
  L56():
    y2 = force? y1;
    checkMissing(y2);
    c = `==`(y2, NULL);
    goto L10(c);
  L57():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  D17():
    deopt 58 [];
  L12(r16):
    st nmy = r16;
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L58():
    y3 = ld y;
    check L60() else D10();
  L59():
    r15 = dyn base3(<sym y>);
    goto L12(r15);
  L70():
    p2 = prom<V +>{
      fixed3 = ld fixed;
      fixed4 = force? fixed3;
      checkMissing(fixed4);
      return fixed4;
    };
    r23 = dyn isFALSE(p2);
    check L71() else D18();
  D10():
    deopt 36 [y3];
  D18():
    deopt 60 [r23];
  L13(r19):
    st y = r19;
    nmy = ld nmy;
    check L66() else D14();
  L60():
    y4 = force? y3;
    checkMissing(y4);
    names1 = ldf names in base;
    r17 = dyn names1(y4);
    check L61() else D11();
  L62():
    y5 = ld y;
    check L64() else D12();
  L63():
    r18 = dyn base4(<sym y>);
    goto L13(r18);
  L71():
    r24 = `!`(r23);
    c2 = `as.logical`(r24);
    if c2 then L72() else L15(c2);
  D11():
    deopt 39 [r17];
  D12():
    deopt 43 [y5];
  D14():
    deopt 48 [nmy];
  L15(c4):
    c8 = `as.logical`(c4);
    if c8 then L76() else L16();
  L61():
    goto L12(r17);
  L64():
    y6 = force? y5;
    checkMissing(y6);
    as_character1 = ldf `as.character` in base;
    r20 = dyn as_character1(y6);
    check L65() else D13();
  L66():
    nmy1 = force? nmy;
    checkMissing(nmy1);
    l1 = ld y;
    names__1 = ldf `names<-`;
    check L67() else D15();
  L72():
    isTRUE = ldf isTRUE;
    check L73() else D19();
  D13():
    deopt 46 [r20];
  D15():
    deopt 51 [nmy1, l1, nmy1];
  D19():
    deopt 63 [c2];
  L16():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L137() else L138();
  L35():
    sym16 = ldf `.Internal`;
    base16 = ldf `.Internal` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L147() else L148();
  L65():
    goto L13(r20);
  L67():
    r21 = dyn names__1(l1, NULL, nmy1);
    check L68() else D16();
  L73():
    p3 = prom<V +>{
      partial1 = ld partial;
      partial2 = force? partial1;
      checkMissing(partial2);
      return partial2;
    };
    r26 = dyn isTRUE(p3);
    check L74() else D20();
  L76():
    Encoding = ldf Encoding;
    check L77() else D21();
  D16():
    deopt 53 [nmy1, r21];
  D20():
    deopt 65 [c2, r26];
  D21():
    deopt 69 [];
  L36(r87):
    c38 = `as.logical`(r87);
    if c38 then L140() else L37();
  L40(r92):
    popenv;
    return r92;
  L68():
    st y = r21;
    goto L14();
  L74():
    r27 = `!`(r26);
    c5 = `as.logical`(r27);
    c6 = `&&`(c2, c5);
    goto L15(c6);
  L77():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r29 = dyn Encoding(p4);
    check L78() else D22();
  L137():
    y21 = ld y;
    check L139() else D54();
  L138():
    r86 = dyn base14(<sym y>);
    goto L36(r86);
  L147():
    x24 = ld x;
    check L149() else D58();
  L148():
    r91 = dyn base16(<lang adist(x, y, costs, counts, fixed, partial, ignore.case, useBytes)>);
    goto L40(r91);
  D22():
    deopt 71 [r29];
  D54():
    deopt 169 [y21];
  D58():
    deopt 186 [x24];
  L37():
    goto L38();
  L38():
    sym15 = ldf `as.integer`;
    base15 = ldf `as.integer` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L143() else L144();
  L78():
    st ex = r29;
    isTRUE1 = ldf isTRUE;
    check L79() else D23();
  L139():
    y22 = force? y21;
    checkMissing(y22);
    c37 = `==`(y22, NULL);
    goto L36(c37);
  L140():
    x21 = ld x;
    check L141() else D55();
  L149():
    x25 = force? x24;
    checkMissing(x25);
    y23 = ld y;
    check L150() else D59();
  D23():
    deopt 74 [];
  D55():
    deopt 172 [x21];
  D59():
    deopt 188 [y23];
  L39(r89):
    st costs = r89;
    goto L35();
  L79():
    p5 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r31 = dyn isTRUE1(p5);
    check L80() else D24();
  L141():
    x22 = force? x21;
    checkMissing(x22);
    st y = x22;
    goto L38();
  L143():
    costs3 = ld costs;
    check L145() else D56();
  L144():
    r88 = dyn base15(<sym costs>);
    goto L39(r88);
  L150():
    y24 = force? y23;
    checkMissing(y24);
    costs5 = ld costs;
    check L151() else D60();
  D24():
    deopt 76 [r31];
  D56():
    deopt 179 [costs3];
  D60():
    deopt 190 [costs5];
  L80():
    c9 = `as.logical`(r31);
    if c9 then L17(c9) else L81();
  L145():
    costs4 = force? costs3;
    checkMissing(costs4);
    as_integer = ldf `as.integer` in base;
    r90 = dyn as_integer(costs4);
    check L146() else D57();
  L151():
    costs6 = force? costs5;
    checkMissing(costs6);
    counts1 = ld counts;
    check L152() else D61();
  D57():
    deopt 182 [r90];
  D61():
    deopt 192 [counts1];
  L17(c10):
    st useBytes = c10;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  L81():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L146():
    goto L39(r90);
  L152():
    counts2 = force? counts1;
    checkMissing(counts2);
    fixed5 = ld fixed;
    check L153() else D62();
  D62():
    deopt 194 [fixed5];
  L18(c14, r33):
    c15 = `as.logical`(r33);
    c16 = `||`(c14, c15);
    goto L17(c16);
  L19(r37):
    r38 = `!`(r37);
    c19 = `as.logical`(r38);
    if c19 then L90() else L20();
  L82():
    ex = ld ex;
    check L84() else D25();
  L83():
    r32 = dyn base5(<lang `==`(ex, "bytes")>);
    goto L18(c9, r32);
  L87():
    y7 = ld y;
    check L89() else D27();
  L88():
    r36 = dyn base6(<sym y>);
    goto L19(r36);
  L153():
    fixed6 = force? fixed5;
    checkMissing(fixed6);
    partial3 = ld partial;
    check L154() else D63();
  D25():
    deopt 79 [c9, ex];
  D27():
    deopt 88 [y7];
  D63():
    deopt 196 [partial3];
  L20():
    goto L23();
  L23():
    useBytes5 = ld useBytes;
    check L101() else D33();
  L84():
    ex1 = force? ex;
    checkMissing(ex1);
    r34 = `==`(ex1, "bytes");
    any = ldf any in base;
    r35 = dyn any(r34);
    check L85() else D26();
  L89():
    y8 = force? y7;
    checkMissing(y8);
    c18 = `==`(y8, NULL);
    goto L19(c18);
  L90():
    Encoding1 = ldf Encoding;
    check L91() else D28();
  L154():
    partial4 = force? partial3;
    checkMissing(partial4);
    ignore_case7 = ld `ignore.case`;
    check L155() else D64();
  D26():
    deopt 84 [c9, r35];
  D28():
    deopt 93 [];
  D33():
    deopt 111 [useBytes5];
  D64():
    deopt 198 [ignore_case7];
  L85():
    goto L18(c9, r35);
  L91():
    p6 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    r40 = dyn Encoding1(p6);
    check L92() else D29();
  L101():
    useBytes6 = force? useBytes5;
    checkMissing(useBytes6);
    c30 = `as.logical`(useBytes6);
    if c30 then L102() else L24();
  L155():
    ignore_case8 = force? ignore_case7;
    checkMissing(ignore_case8);
    useBytes7 = ld useBytes;
    check L156() else D65();
  D29():
    deopt 95 [r40];
  D65():
    deopt 200 [useBytes7];
  L24():
    isTRUE2 = ldf isTRUE;
    check L114() else D40();
  L28(x12):
    goto L35();
  L92():
    st ey = r40;
    useBytes3 = ld useBytes;
    check L93() else D30();
  L102():
    lapply = ldf lapply;
    check L103() else D34();
  L156():
    useBytes8 = force? useBytes7;
    checkMissing(useBytes8);
    adist = ldf adist in base;
    r93 = dyn adist(x25, y24, costs6, counts2, fixed6, partial4, ignore_case8, useBytes8);
    check L157() else D66();
  D30():
    deopt 97 [useBytes3];
  D34():
    deopt 114 [];
  D40():
    deopt 132 [];
  D66():
    deopt 203 [r93];
  L93():
    useBytes4 = force? useBytes3;
    checkMissing(useBytes4);
    c20 = `as.logical`(useBytes4);
    if c20 then L21(c20) else L94();
  L103():
    p7 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p8 = prom<V +>{
      bytesToInt = ld bytesToInt;
      bytesToInt1 = force? bytesToInt;
      checkMissing(bytesToInt1);
      return bytesToInt1;
    };
    r47 = dyn lapply(p7, p8);
    check L104() else D35();
  L114():
    p11 = prom<V +>{
      ignore_case1 = ld `ignore.case`;
      ignore_case2 = force? ignore_case1;
      checkMissing(ignore_case2);
      return ignore_case2;
    };
    r54 = dyn isTRUE2(p11);
    check L115() else D41();
  L157():
    goto L40(r93);
  D35():
    deopt 117 [r47];
  D41():
    deopt 134 [r54];
  L21(c21):
    st useBytes = c21;
    goto L23();
  L94():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L104():
    st x = r47;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L105() else L106();
  L115():
    st `ignore.case` = r54;
    ignore_case3 = ld `ignore.case`;
    check L116() else D42();
  D42():
    deopt 136 [ignore_case3];
  L22(c25, r42):
    c26 = `as.logical`(r42);
    c27 = `||`(c25, c26);
    goto L21(c27);
  L25(r49):
    c32 = `as.logical`(r49);
    if c32 then L108() else L26();
  L95():
    ey = ld ey;
    check L97() else D31();
  L96():
    r41 = dyn base7(<lang `==`(ey, "bytes")>);
    goto L22(c20, r41);
  L105():
    y11 = ld y;
    check L107() else D36();
  L106():
    r48 = dyn base8(<sym y>);
    goto L25(r48);
  L116():
    ignore_case4 = force? ignore_case3;
    checkMissing(ignore_case4);
    c33 = `as.logical`(ignore_case4);
    if c33 then L117() else L29();
  D31():
    deopt 101 [c20, ey];
  D36():
    deopt 120 [y11];
  L26():
    lapply1 = ldf lapply;
    check L111() else D38();
  L27(x11):
    st y = x11;
    goto L28(x11);
  L29():
    lapply3 = ldf lapply;
    check L121() else D45();
  L30(r63):
    st x = r63;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L123() else L124();
  L97():
    ey1 = force? ey;
    checkMissing(ey1);
    r43 = `==`(ey1, "bytes");
    any1 = ldf any in base;
    r44 = dyn any1(r43);
    check L98() else D32();
  L107():
    y12 = force? y11;
    checkMissing(y12);
    c31 = `==`(y12, NULL);
    goto L25(c31);
  L108():
    x9 = ld x;
    check L109() else D37();
  L117():
    lapply2 = ldf lapply;
    check L118() else D43();
  D32():
    deopt 106 [c20, r44];
  D37():
    deopt 123 [x9];
  D38():
    deopt 126 [];
  D43():
    deopt 139 [];
  D45():
    deopt 144 [];
  L31(r71):
    c35 = `as.logical`(r71);
    if c35 then L126() else L32();
  L98():
    goto L22(c20, r44);
  L109():
    x10 = force? x9;
    checkMissing(x10);
    goto L27(x10);
  L111():
    p9 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      return y14;
    };
    p10 = prom<V +>{
      bytesToInt2 = ld bytesToInt;
      bytesToInt3 = force? bytesToInt2;
      checkMissing(bytesToInt3);
      return bytesToInt3;
    };
    r52 = dyn lapply1(p9, p10);
    check L112() else D39();
  L118():
    p13 = prom<V +>{
      tolower = ldf tolower;
      p12 = prom<V +>{
        sym9 = ldf enc2utf8;
        base9 = ldf enc2utf8 in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r56):
        return r56;
      L1():
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        enc2utf8 = ldf enc2utf8 in base;
        r57 = dyn enc2utf8(x14);
        goto L0(r57);
      L2():
        r55 = dyn base9(<sym x>);
        goto L0(r55);
      };
      r59 = dyn tolower(p12);
      return r59;
    };
    p14 = prom<V +>{
      utf8ToInt = ld utf8ToInt;
      utf8ToInt1 = force? utf8ToInt;
      checkMissing(utf8ToInt1);
      return utf8ToInt1;
    };
    r62 = dyn lapply2(p13, p14);
    check L119() else D44();
  L121():
    p15 = prom<V +>{
      sym10 = ldf enc2utf8;
      base10 = ldf enc2utf8 in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r65):
      return r65;
    L1():
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      enc2utf9 = ldf enc2utf8 in base;
      r66 = dyn enc2utf9(x16);
      goto L0(r66);
    L2():
      r64 = dyn base10(<sym x>);
      goto L0(r64);
    };
    p16 = prom<V +>{
      utf8ToInt2 = ld utf8ToInt;
      utf8ToInt3 = force? utf8ToInt2;
      checkMissing(utf8ToInt3);
      return utf8ToInt3;
    };
    r69 = dyn lapply3(p15, p16);
    check L122() else D46();
  L123():
    y15 = ld y;
    check L125() else D47();
  L124():
    r70 = dyn base11(<sym y>);
    goto L31(r70);
  D39():
    deopt 129 [r52];
  D44():
    deopt 142 [r62];
  D46():
    deopt 147 [r69];
  D47():
    deopt 150 [y15];
  L32():
    ignore_case5 = ld `ignore.case`;
    check L129() else D49();
  L33(x19):
    st y = x19;
    goto L28(x19);
  L112():
    goto L27(r52);
  L119():
    goto L30(r62);
  L122():
    goto L30(r69);
  L125():
    y16 = force? y15;
    checkMissing(y16);
    c34 = `==`(y16, NULL);
    goto L31(c34);
  L126():
    x17 = ld x;
    check L127() else D48();
  D48():
    deopt 153 [x17];
  D49():
    deopt 155 [ignore_case5];
  L127():
    x18 = force? x17;
    checkMissing(x18);
    goto L33(x18);
  L129():
    ignore_case6 = force? ignore_case5;
    checkMissing(ignore_case6);
    c36 = `as.logical`(ignore_case6);
    if c36 then L130() else L34();
  L34():
    lapply5 = ldf lapply;
    check L134() else D52();
  L130():
    lapply4 = ldf lapply;
    check L131() else D50();
  D50():
    deopt 158 [];
  D52():
    deopt 163 [];
  L131():
    p18 = prom<V +>{
      tolower1 = ldf tolower;
      p17 = prom<V +>{
        sym12 = ldf enc2utf8;
        base12 = ldf enc2utf8 in base;
        guard12 = `==`.4(sym12, base12);
        if guard12 then L1() else L2();
      L0(r73):
        return r73;
      L1():
        y17 = ld y;
        y18 = force? y17;
        checkMissing(y18);
        enc2utf10 = ldf enc2utf8 in base;
        r74 = dyn enc2utf10(y18);
        goto L0(r74);
      L2():
        r72 = dyn base12(<sym y>);
        goto L0(r72);
      };
      r76 = dyn tolower1(p17);
      return r76;
    };
    p19 = prom<V +>{
      utf8ToInt4 = ld utf8ToInt;
      utf8ToInt5 = force? utf8ToInt4;
      checkMissing(utf8ToInt5);
      return utf8ToInt5;
    };
    r79 = dyn lapply4(p18, p19);
    check L132() else D51();
  L134():
    p20 = prom<V +>{
      sym13 = ldf enc2utf8;
      base13 = ldf enc2utf8 in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      enc2utf11 = ldf enc2utf8 in base;
      r82 = dyn enc2utf11(y20);
      goto L0(r82);
    L2():
      r80 = dyn base13(<sym y>);
      goto L0(r80);
    };
    p21 = prom<V +>{
      utf8ToInt6 = ld utf8ToInt;
      utf8ToInt7 = force? utf8ToInt6;
      checkMissing(utf8ToInt7);
      return utf8ToInt7;
    };
    r85 = dyn lapply5(p20, p21);
    check L135() else D53();
  D51():
    deopt 161 [r79];
  D53():
    deopt 166 [r85];
  L132():
    goto L33(r79);
  L135():
    goto L33(r85);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_na:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg charToRaw:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r8:V, reg as_integer:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(x2);
    check L7() else D1();
  L8():
    popenv;
    return NA_INT;
  D1():
    deopt 5 [r2];
  L3(r6):
    popenv;
    return r6;
  L7():
    goto L0(r2);
  L11():
    charToRaw = ldf charToRaw;
    check L13() else D2();
  L12():
    r5 = dyn base1(<lang charToRaw(x)>);
    goto L3(r5);
  D2():
    deopt 14 [];
  L13():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r8 = dyn charToRaw(p);
    check L14() else D3();
  D3():
    deopt 16 [r8];
  L14():
    as_integer = ldf `as.integer` in base;
    r9 = dyn as_integer(r8);
    check L15() else D4();
  D4():
    deopt 18 [r9];
  L15():
    goto L3(r9);
  }
}