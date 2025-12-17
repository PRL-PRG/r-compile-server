fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2491140407;
    st `summary.infl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2491140407(object, digits, `...`) {
  (reg object:*, reg digits:*, reg ddd:dots) -+> V { var object:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg is_inf:*, reg is_inf1:V, reg dim:cls, reg r11:V, reg length:cls, reg r12:V, reg r13:V, reg l:*, reg c1:L, reg r15:L, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:L, reg l5:*, reg r24:L, reg r25:V, reg is_inf2:*, reg is_inf3:V, reg is_na:cls, reg r26:V, reg ___:cls, reg r27:V, reg apply:cls, reg is_inf4:*, reg is_inf5:V, reg p1:p(V +), reg any:*, reg any1:V, reg p2:p(V +), reg r30:V, reg cat:cls, reg deparse:cls, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r31:V, reg p3:p(V +), reg r33:V, reg p4:p(V +), reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg is_star:*, reg is_star1:V, reg any2:cls, reg r38:V, reg c3:L, reg isMLM:*, reg isMLM1:V, reg c4:L, reg is_inf6:*, reg is_inf7:V, reg c5:L, reg is_inf9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg is_star2:*, reg is_star3:V, reg __:cls, reg r39:V, reg object9:*, reg object10:V, reg c6:L, reg object12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r40:V, reg c7:L, reg dx11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg is_star4:*, reg is_star5:V, reg __1:cls, reg r41:V, reg is_inf10:*, reg is_inf11:V, reg c8:L, reg is_inf13:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg is_star6:*, reg is_star7:V, reg __2:cls, reg r42:V, reg object13:*, reg object14:V, reg c9:L, reg object16:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg r43:V, reg c10:L, reg dx20:V, reg dr16:V, reg dc8:L, reg dx21:V, reg dx22:V, reg is_star8:*, reg is_star9:V, reg __3:cls, reg r44:V, reg ____:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg object17:*, reg object18:V, reg c11:L, reg object20:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg r47:V, reg dimnames:cls, reg r48:V, reg c12:L, reg r50:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg __4:cls, reg r51:V, reg p5:p(V +), reg format:cls, reg seq:cls, reg is_star10:*, reg is_star11:V, reg p6:p(V +), reg r54:V, reg p7:p(V +), reg r56:V, reg p8:p(V +), reg r58:V, reg rownam:*, reg rownam1:V, reg c13:L, reg rownam3:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg is_star12:*, reg is_star13:V, reg __5:cls, reg r59:V, reg l6:*, reg dimnames1:cls, reg r60:V, reg c14:L, reg dx30:V, reg l8:*, reg r62:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg l10:*, reg dx34:V, reg ____1:cls, reg r63:V, reg dimnames__:cls, reg r64:V, reg format1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r65:V, reg r66:V, reg round:cls, reg r67:V, reg p9:p(V +), reg r69:V, reg cat1:cls, reg r70:V, reg print:cls, reg array:cls, reg paste0:cls, reg chmat:*, reg chmat1:V, reg p10:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r72:V, reg r73:V, reg c15:cls, reg r74:V, reg c16:L, reg r76:V, reg dr26:V, reg dc13:L, reg dx35:V, reg dx36:V, reg is_inf14:*, reg is_inf15:V, reg r77:V, reg __6:cls, reg r78:V, reg p11:p(V +), reg r80:V, reg p12:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg imat:*, reg imat1:V, reg dimnames2:cls, reg r84:V, reg p13:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r86:V, reg r87:V, reg imat2:*, reg imat3:V, reg dim1:cls, reg r88:V, reg p14:p(V +), reg r90:V, reg p15:p(V +), reg r92:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg imat4:*, reg imat5:V, reg invisible:cls, reg r95:V, reg cat2:cls, reg r96:V, reg numeric:cls, reg r97:V |
    mkenv;
    st object = object;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 5);
      max = ldf max in base;
      r4 = dyn max(2, r3);
      goto L0(r4);
    L2():
      r = dyn base(2, <lang `-`(getOption("digits"), 5)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    object1 = ld object;
    check L17() else D0();
  D0():
    deopt 0 [object1];
  L17():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L19() else L20(object2);
  L18(dx1):
    st `is.inf` = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L19():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(object4):
    r6 = `$`(object4, <sym is.inf>);
    goto L18(r6);
  L2(r8):
    r13 = `==`(r8, 3);
    st isMLM = r13;
    l = ld `is.inf`;
    c1 = `is.object`(l);
    if c1 then L29() else L30(FALSE, l);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L23():
    r7 = dyn base1(<lang dim(is.inf)>);
    goto L2(r7);
  L3(r10):
    length = ldf length in base;
    r12 = dyn length(r10);
    check L28() else D3();
  L4(dx3):
    st `is.inf` = dx3;
    apply = ldf apply;
    check L36() else D6();
  L24():
    is_inf = ld `is.inf`;
    check L26() else D1();
  L25():
    r9 = dyn base2(<sym is.inf>);
    goto L3(r9);
  L29():
    dr2 = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(FALSE, dr2);
  L30(r15, l2):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  D1():
    deopt 8 [is_inf];
  D3():
    deopt 13 [r12];
  D6():
    deopt 29 [];
  L5(r23, l5, r24, r25):
    ___ = ldf `[<-` in base;
    r27 = dyn ___(l5, r24, r25);
    goto L4(r27);
  L26():
    is_inf1 = force? is_inf;
    checkMissing(is_inf1);
    dim = ldf dim in base;
    r11 = dyn dim(is_inf1);
    check L27() else D2();
  L28():
    goto L2(r12);
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L32():
    is_inf2 = ld `is.inf`;
    check L34() else D4();
  L33():
    r22 = dyn base3(<sym is.inf>);
    goto L5(r15, l2, FALSE, r22);
  L36():
    p1 = prom<V +>{
      is_inf4 = ld `is.inf`;
      is_inf5 = force? is_inf4;
      checkMissing(is_inf5);
      return is_inf5;
    };
    p2 = prom<V +>{
      any = ld any;
      any1 = force? any;
      checkMissing(any1);
      return any1;
    };
    r30 = dyn apply(p1, 1, p2);
    check L37() else D7();
  D2():
    deopt 11 [r11];
  D4():
    deopt 22 [r15, l2, FALSE, is_inf2];
  D7():
    deopt 33 [r30];
  L27():
    goto L3(r11);
  L34():
    is_inf3 = force? is_inf2;
    checkMissing(is_inf3);
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(is_inf3);
    check L35() else D5();
  L37():
    st `is.star` = r30;
    cat = ldf cat;
    check L38() else D8();
  D5():
    deopt 25 [r15, l2, FALSE, r26];
  D8():
    deopt 36 [];
  L35():
    goto L5(r15, l2, FALSE, r26);
  L38():
    p4 = prom<V +>{
      deparse = ldf deparse;
      p3 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        c2 = `is.object`(object6);
        if c2 then L1() else L2(object6);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", object6);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(object8):
        r31 = `$`(object8, <sym call>);
        goto L0(r31);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r33 = dyn deparse(p3);
      return r33;
    };
    r35 = dyn cat("Potentially influential observations of\n\t", p4, ":\n");
    check L39() else D9();
  D9():
    deopt 40 [r35];
  L39():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L6(r37):
    c3 = `as.logical`(r37);
    if c3 then L44() else L7();
  L40():
    is_star = ld `is.star`;
    check L42() else D10();
  L41():
    r36 = dyn base4(<sym is.star>);
    goto L6(r36);
  D10():
    deopt 43 [is_star];
  L7():
    cat2 = ldf cat;
    check L101() else D37();
  L42():
    is_star1 = force? is_star;
    checkMissing(is_star1);
    any2 = ldf any in base;
    r38 = dyn any2(is_star1);
    check L43() else D11();
  L44():
    isMLM = ld isMLM;
    check L45() else D12();
  D11():
    deopt 46 [r38];
  D12():
    deopt 47 [isMLM];
  D37():
    deopt 134 [];
  L43():
    goto L6(r38);
  L45():
    isMLM1 = force? isMLM;
    checkMissing(isMLM1);
    c4 = `as.logical`(isMLM1);
    if c4 then L46() else L8();
  L101():
    r96 = dyn cat2("NONE\n");
    check L102() else D38();
  D38():
    deopt 136 [r96];
  L8():
    is_inf10 = ld `is.inf`;
    check L62() else D17();
  L11():
    ____ = ldf `%||%`;
    check L76() else D21();
  L46():
    is_inf6 = ld `is.inf`;
    check L47() else D13();
  L102():
    numeric = ldf numeric;
    check L103() else D39();
  D13():
    deopt 49 [is_inf6];
  D17():
    deopt 70 [is_inf10];
  D21():
    deopt 90 [];
  D39():
    deopt 138 [];
  L47():
    is_inf7 = force? is_inf6;
    checkMissing(is_inf7);
    c5 = `is.object`(is_inf7);
    if c5 then L48() else L49(is_inf7);
  L62():
    is_inf11 = force? is_inf10;
    checkMissing(is_inf11);
    c8 = `is.object`(is_inf11);
    if c8 then L63() else L64(is_inf11);
  L76():
    p5 = prom<V +>{
      sym5 = ldf dimnames;
      base5 = ldf dimnames in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r46):
      c12 = `is.object`(r46);
      if c12 then L8() else L9(r46);
    L2():
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c11 = `is.object`(object18);
      if c11 then L5() else L6(object18);
    L3():
      r45 = dyn base5(<lang `$`(object, infmat)>);
      goto L0(r45);
    L1(dx26):
      return dx26;
    L4(dx24):
      dimnames = ldf dimnames in base;
      r48 = dyn dimnames(dx24);
      goto L0(r48);
    L5():
      dr18 = tryDispatchBuiltin.1("$", object18);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(object20):
      r47 = `$`(object20, <sym infmat>);
      goto L4(r47);
    L8():
      dr20 = tryDispatchBuiltin.1("[[", r46);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L10() else L9(dr20);
    L9(r50):
      __4 = ldf `[[` in base;
      r51 = dyn __4(r50, 1);
      goto L1(r51);
    L7():
      dx23 = getTryDispatchBuiltinValue(dr18);
      goto L4(dx23);
    L10():
      dx25 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx25);
    };
    p8 = prom<V +>{
      format = ldf format;
      p7 = prom<V +>{
        seq = ldf seq;
        p6 = prom<V +>{
          is_star10 = ld `is.star`;
          is_star11 = force? is_star10;
          checkMissing(is_star11);
          return is_star11;
        };
        r54 = dyn seq(p6);
        return r54;
      };
      r56 = dyn format(p7);
      return r56;
    };
    r58 = dyn ____(p5, p8);
    check L77() else D22();
  L103():
    r97 = dyn numeric();
    check L104() else D40();
  D22():
    deopt 93 [r58];
  D40():
    deopt 139 [r97];
  L9(dx7):
    st `is.inf` = dx7;
    object9 = ld object;
    check L52() else D15();
  L12(dx16):
    st `is.inf` = dx16;
    object13 = ld object;
    check L67() else D19();
  L48():
    dr6 = tryDispatchBuiltin.1("[", is_inf7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49(dr6);
  L49(is_inf9):
    is_star2 = ld `is.star`;
    check L51() else D14();
  L63():
    dr12 = tryDispatchBuiltin.1("[", is_inf11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L65() else L64(dr12);
  L64(is_inf13):
    is_star6 = ld `is.star`;
    check L66() else D18();
  L77():
    st rownam = r58;
    rownam = ld rownam;
    check L78() else D23();
  L104():
    popenv;
    return r97;
  D14():
    deopt 51 [is_inf9, is_star2];
  D15():
    deopt 58 [object9];
  D18():
    deopt 72 [is_inf13, is_star6];
  D19():
    deopt 78 [object13];
  D23():
    deopt 95 [rownam];
  L50():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L51():
    is_star3 = force? is_star2;
    __ = ldf `[` in base;
    r39 = dyn __(is_inf7, is_star3, <missing>, <missing>);
    goto L9(r39);
  L52():
    object10 = force? object9;
    checkMissing(object10);
    c6 = `is.object`(object10);
    if c6 then L54() else L55(object10);
  L65():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L12(dx15);
  L66():
    is_star7 = force? is_star6;
    __2 = ldf `[` in base;
    r42 = dyn __2(is_inf11, is_star7, <missing>);
    goto L12(r42);
  L67():
    object14 = force? object13;
    checkMissing(object14);
    c9 = `is.object`(object14);
    if c9 then L69() else L70(object14);
  L78():
    rownam1 = force? rownam;
    checkMissing(rownam1);
    c13 = `is.object`(rownam1);
    if c13 then L79() else L80(rownam1);
  L14(dx28):
    l6 = ld imat;
    dimnames1 = ldf dimnames;
    check L83() else D25();
  L53(dx9):
    c7 = `is.object`(dx9);
    if c7 then L57() else L58(dx9);
  L54():
    dr8 = tryDispatchBuiltin.1("$", object10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(dr8);
  L55(object12):
    r40 = `$`(object12, <sym infmat>);
    goto L53(r40);
  L68(dx18):
    c10 = `is.object`(dx18);
    if c10 then L72() else L73(dx18);
  L69():
    dr14 = tryDispatchBuiltin.1("$", object14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L71() else L70(dr14);
  L70(object16):
    r43 = `$`(object16, <sym infmat>);
    goto L68(r43);
  L79():
    dr22 = tryDispatchBuiltin.1("[", rownam1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L81() else L80(dr22);
  L80(rownam3):
    is_star12 = ld `is.star`;
    check L82() else D24();
  D24():
    deopt 97 [rownam3, is_star12];
  D25():
    deopt 101 [dx28, l6, dx28];
  L10(dx13):
    st imat = dx13;
    goto L11();
  L13(dx22):
    st imat = dx22;
    goto L11();
  L56():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L53(dx8);
  L57():
    dr10 = tryDispatchBuiltin.1("[", dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L59() else L58(dr10);
  L58(dx11):
    is_star4 = ld `is.star`;
    check L60() else D16();
  L71():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L68(dx17);
  L72():
    dr16 = tryDispatchBuiltin.1("[", dx18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L74() else L73(dr16);
  L73(dx20):
    is_star8 = ld `is.star`;
    check L75() else D20();
  L81():
    dx27 = getTryDispatchBuiltinValue(dr22);
    goto L14(dx27);
  L82():
    is_star13 = force? is_star12;
    __5 = ldf `[` in base;
    r59 = dyn __5(rownam3, is_star13);
    goto L14(r59);
  L83():
    r60 = dyn dimnames1(dx28, NULL);
    check L84() else D26();
  D16():
    deopt 61 [dx11, is_star4];
  D20():
    deopt 81 [dx20, is_star8];
  D26():
    deopt 103 [dx28, l6, dx28, r60];
  L59():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx12);
  L60():
    is_star5 = force? is_star4;
    __1 = ldf `[` in base;
    r41 = dyn __1(dx9, is_star5, <missing>, <missing>, FALSE);
    goto L10(r41);
  L74():
    dx21 = getTryDispatchBuiltinValue(dr16);
    goto L13(dx21);
  L75():
    is_star9 = force? is_star8;
    __3 = ldf `[` in base;
    r44 = dyn __3(dx18, is_star9, <missing>, FALSE);
    goto L13(r44);
  L84():
    c14 = `is.object`(r60);
    if c14 then L85() else L86(dx28, l6, r60);
  L15(dx33, l10, dx34):
    dimnames__ = ldf `dimnames<-`;
    check L88() else D27();
  L85():
    dr24 = tryDispatchBuiltin.0("[[<-", r60, dx28);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L87() else L86(dx28, l6, dr24);
  L86(dx30, l8, r62):
    ____1 = ldf `[[<-` in base;
    r63 = dyn ____1(r62, dx28, 1);
    goto L15(dx30, l8, r63);
  D27():
    deopt 108 [dx33, l10, dx34];
  L87():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L15(dx28, l6, dx32);
  L88():
    r64 = dyn dimnames__(l10, NULL, dx34);
    check L89() else D28();
  D28():
    deopt 110 [dx33, r64];
  L89():
    st imat = r64;
    format1 = ldf format;
    check L90() else D29();
  D29():
    deopt 113 [];
  L90():
    p9 = prom<V +>{
      sym6 = ldf round;
      base6 = ldf round in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      round = ldf round in base;
      r67 = dyn round(<sym imat>, <sym digits>);
      goto L0(r67);
    L2():
      r65 = dyn base6[, digits](<sym imat>, <sym digits>);
      goto L0(r65);
    };
    r69 = dyn format1(p9);
    check L91() else D30();
  D30():
    deopt 115 [r69];
  L91():
    st chmat = r69;
    cat1 = ldf cat;
    check L92() else D31();
  D31():
    deopt 118 [];
  L92():
    r70 = dyn cat1("\n");
    check L93() else D32();
  D32():
    deopt 120 [r70];
  L93():
    print = ldf print;
    check L94() else D33();
  D33():
    deopt 122 [];
  L94():
    p15 = prom<V +>{
      array = ldf array;
      p12 = prom<V +>{
        paste0 = ldf paste0;
        p10 = prom<V +>{
          chmat = ld chmat;
          chmat1 = force? chmat;
          checkMissing(chmat1);
          return chmat1;
        };
        p11 = prom<V +>{
          sym7 = ldf c;
          base7 = ldf c in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L2() else L3();
        L0(r73):
          c16 = `is.object`(r73);
          if c16 then L4() else L5(r73);
        L2():
          c15 = ldf c in base;
          r74 = dyn c15("", "_*");
          goto L0(r74);
        L3():
          r72 = dyn base7("", "_*");
          goto L0(r72);
        L1(dx36):
          return dx36;
        L4():
          dr26 = tryDispatchBuiltin.1("[", r73);
          dc13 = getTryDispatchBuiltinDispatched(dr26);
          if dc13 then L6() else L5(dr26);
        L5(r76):
          is_inf14 = ld `is.inf`;
          is_inf15 = force? is_inf14;
          checkMissing(is_inf15);
          r77 = `+`(1, is_inf15);
          __6 = ldf `[` in base;
          r78 = dyn __6(r76, r77);
          goto L1(r78);
        L6():
          dx35 = getTryDispatchBuiltinValue(dr26);
          goto L1(dx35);
        };
        r80 = dyn paste0(p10, p11);
        return r80;
      };
      p13 = prom<V +>{
        sym8 = ldf dimnames;
        base8 = ldf dimnames in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r83):
        return r83;
      L1():
        imat = ld imat;
        imat1 = force? imat;
        checkMissing(imat1);
        dimnames2 = ldf dimnames in base;
        r84 = dyn dimnames2(imat1);
        goto L0(r84);
      L2():
        r82 = dyn base8(<sym imat>);
        goto L0(r82);
      };
      p14 = prom<V +>{
        sym9 = ldf dim;
        base9 = ldf dim in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r87):
        return r87;
      L1():
        imat2 = ld imat;
        imat3 = force? imat2;
        checkMissing(imat3);
        dim1 = ldf dim in base;
        r88 = dyn dim1(imat3);
        goto L0(r88);
      L2():
        r86 = dyn base9(<sym imat>);
        goto L0(r86);
      };
      r90 = dyn array[, dimnames, dim](p12, p13, p14);
      return r90;
    };
    r92 = dyn print[, quote](p15, FALSE);
    check L95() else D34();
  D34():
    deopt 126 [r92];
  L95():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L96() else L97();
  L16(r94):
    popenv;
    return r94;
  L96():
    imat4 = ld imat;
    check L98() else D35();
  L97():
    r93 = dyn base10(<sym imat>);
    goto L16(r93);
  D35():
    deopt 129 [imat4];
  L98():
    imat5 = force? imat4;
    checkMissing(imat5);
    invisible = ldf invisible in base;
    r95 = dyn invisible(imat5);
    check L99() else D36();
  D36():
    deopt 132 [r95];
  L99():
    goto L16(r95);
  }
}