fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3995949200;
    st `as.data.frame.list` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3995949200(x, `row.names`, optional, `...`, `cut.names`, `col.names`, `fix.empty.names`, `new.names`, `check.names`, stringsAsFactors) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots, reg cut_names:*, reg col_names:*, reg fix_empty_names:*, reg new_names:*, reg check_names:*, reg stringsAsFactors:*) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, var `cut.names`:*, reg cut_names_isMissing:L, reg cut_names_orDefault:*, var `col.names`:*, reg col_names_isMissing:L, reg col_names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg p:p(V +), var `fix.empty.names`:*, reg fix_empty_names_isMissing:L, reg fix_empty_names_orDefault:*, var `new.names`:*, reg new_names_isMissing:L, reg new_names_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg p1:p(V +), var `check.names`:*, reg check_names_isMissing:L, reg check_names_orDefault:*, reg optional1:*, reg optional2:V, reg r9:V, reg p2:p(V +), var stringsAsFactors:*, reg stringsAsFactors_isMissing:L, reg stringsAsFactors_orDefault:*, reg cut_names1:*, reg cut_names2:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg cut_names3:*, reg cut_names4:V, reg c1:L, reg c2:L, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg cut_names5:*, reg cut_names6:V, reg as_integer:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg col_names1:*, reg col_names2:V, reg nchar:cls, reg r20:V, reg maxL:*, reg maxL1:V, reg r21:V, reg any:cls, reg r22:V, reg c3:L, reg paste:cls, reg substr:cls, reg col_names3:*, reg col_names4:V, reg c4:L, reg col_names6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg long:*, reg long1:V, reg __:cls, reg r23:V, reg p3:p(V +), reg maxL2:*, reg maxL3:V, reg r25:V, reg p4:p(V +), reg r27:V, reg p5:p(V +), reg r29:V, reg l:*, reg c5:L, reg r31:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r33:V, reg dx3:V, reg long2:*, reg long3:V, reg ___:cls, reg r34:V, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg formals:cls, reg data_frame:*, reg data_frame1:V, reg p6:p(V +), reg r42:V, reg names1:cls, reg r43:V, reg c6:L, reg r45:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r46:V, reg col_names7:*, reg col_names8:V, reg match:cls, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg m:*, reg m1:V, reg any1:cls, reg r50:V, reg c7:L, reg paste1:cls, reg col_names9:*, reg col_names10:V, reg c8:L, reg col_names12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg m2:*, reg m3:V, reg __2:cls, reg r51:V, reg p7:p(V +), reg r53:V, reg l3:*, reg c9:L, reg r55:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r57:V, reg dx9:V, reg m4:*, reg m5:V, reg ___1:cls, reg r58:V, reg new_names1:*, reg new_names2:V, reg c10:L, reg c11:V, reg any_m:*, reg any_m1:V, reg c13:L, reg c14:V, reg c16:L, reg c17:V, reg cut_names7:*, reg cut_names8:V, reg c19:L, reg c20:V, reg c22:L, reg col_names13:*, reg col_names14:V, reg l6:*, reg names__:cls, reg r60:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg r62:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r63:V, reg r64:V, reg check_names1:*, reg check_names2:V, reg fix_empty_names1:*, reg fix_empty_names2:V, reg stringsAsFactors1:*, reg stringsAsFactors2:V, reg list:cls, reg r65:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg missing1:cls, reg r68:V, reg r69:V, reg c23:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg r71:V, reg row_names1:*, reg row_names2:V, reg list1:cls, reg r72:V, reg r73:V, reg c24:cls, reg r74:V, reg do_call:cls, reg data_frame2:*, reg data_frame3:V, reg p8:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:V, reg x3:*, reg x4:V, reg alis:*, reg alis1:V, reg c25:cls, reg r78:V, reg p9:p(V +), reg r80:V, reg new_names3:*, reg new_names4:V, reg c26:L, reg c28:V, reg check_names3:*, reg check_names4:V, reg r81:V, reg c29:L, reg c30:V, reg c32:L, reg c34:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg c37:L, reg r83:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r84:V, reg c40:L, reg r85:V, reg x5:*, reg x6:V, reg names2:cls, reg r86:V, reg length:cls, reg r87:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r90:V, reg c43:L, reg r91:V, reg r92:V, reg col_names16:*, reg col_names17:V, reg length1:cls, reg r93:V, reg r94:V, reg c44:L, reg c45:V, reg c47:L, reg c49:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r95:V, reg c52:L, reg r96:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r97:V, reg c55:L, reg r98:V, reg col_names18:*, reg col_names19:V, reg is_na:cls, reg r99:V, reg any2:cls, reg r100:V, reg c56:L, reg c57:V, reg c59:L, reg col_names20:*, reg col_names21:V, reg c60:L, reg col_names23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg naNm:*, reg naNm1:V, reg __3:cls, reg r101:V, reg l7:*, reg names3:cls, reg r102:V, reg c61:L, reg dx13:V, reg l9:*, reg r104:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg l11:*, reg dx17:V, reg naNm2:*, reg naNm3:V, reg ___2:cls, reg r105:V, reg names__1:cls, reg r106:V, reg any_m2:*, reg any_m3:V, reg c62:L, reg sub:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r107:V, reg r108:V, reg x7:*, reg x8:V, reg names4:cls, reg r109:V, reg p10:p(V +), reg r111:V, reg l12:*, reg names__2:cls, reg r112:V, reg x9:*, reg x10:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    cut_names_isMissing = missing.0(cut_names);
    if cut_names_isMissing then L2(FALSE) else L2(cut_names);
  L2(cut_names_orDefault):
    st `cut.names` = cut_names_orDefault;
    col_names_isMissing = missing.0(col_names);
    if col_names_isMissing then L3() else L4(col_names);
  L3():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r2 = dyn names(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L4(p);
  L4(col_names_orDefault):
    st `col.names` = col_names_orDefault;
    fix_empty_names_isMissing = missing.0(fix_empty_names);
    if fix_empty_names_isMissing then L5(TRUE) else L5(fix_empty_names);
  L5(fix_empty_names_orDefault):
    st `fix.empty.names` = fix_empty_names_orDefault;
    new_names_isMissing = missing.0(new_names);
    if new_names_isMissing then L6() else L7(new_names);
  L6():
    p1 = prom<V +>{
      sym1 = ldf missing;
      base1 = ldf missing in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      r7 = `!`(r5);
      return r7;
    L1():
      missing = ldf missing in base;
      r6 = dyn missing(<sym col.names>);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym col.names>);
      goto L0(r4);
    };
    goto L7(p1);
  L7(new_names_orDefault):
    st `new.names` = new_names_orDefault;
    check_names_isMissing = missing.0(check_names);
    if check_names_isMissing then L8() else L9(check_names);
  L8():
    p2 = prom<V +>{
      optional1 = ld optional;
      optional2 = force? optional1;
      checkMissing(optional2);
      r9 = `!`(optional2);
      return r9;
    };
    goto L9(p2);
  L9(check_names_orDefault):
    st `check.names` = check_names_orDefault;
    stringsAsFactors_isMissing = missing.0(stringsAsFactors);
    if stringsAsFactors_isMissing then L10(FALSE) else L10(stringsAsFactors);
  L10(stringsAsFactors_orDefault):
    st stringsAsFactors = stringsAsFactors_orDefault;
    cut_names1 = ld `cut.names`;
    check L52() else D0();
  D0():
    deopt 0 [cut_names1];
  L52():
    cut_names2 = force? cut_names1;
    checkMissing(cut_names2);
    c = `as.logical`(cut_names2);
    if c then L53() else L11();
  L11():
    goto L20();
  L20():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L53():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L12(r12):
    c2 = `as.logical`(r12);
    if c2 then L57() else L13();
  L21(r38):
    st m = r38;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L92() else L93();
  L54():
    cut_names3 = ld `cut.names`;
    check L56() else D1();
  L55():
    r11 = dyn base2(<sym cut.names>);
    goto L12(r11);
  L80():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L82() else L83();
  L81():
    r37 = dyn base6(<lang `[`(names(formals(data.frame)), `-`(1))>, <sym col.names>, 0);
    goto L21(r37);
  D1():
    deopt 3 [cut_names3];
  L13():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L14(r13):
    st maxL = r13;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L22(r40):
    c6 = `is.object`(r40);
    if c6 then L87() else L88(r40);
  L24(r49):
    st `any.m` = r49;
    c7 = `as.logical`(r49);
    if c7 then L96() else L25();
  L56():
    cut_names4 = force? cut_names3;
    checkMissing(cut_names4);
    c1 = `is.logical`(cut_names4);
    goto L12(c1);
  L57():
    goto L14(256);
  L82():
    formals = ldf formals;
    check L84() else D11();
  L83():
    r39 = dyn base7(<lang formals(data.frame)>);
    goto L22(r39);
  L92():
    m = ld m;
    check L94() else D16();
  L93():
    r48 = dyn base8(<sym m>);
    goto L24(r48);
  D11():
    deopt 51 [];
  D16():
    deopt 68 [m];
  L15(r17):
    c3 = `as.logical`(r17);
    if c3 then L71() else L17();
  L23(dx5):
    col_names7 = ld `col.names`;
    check L90() else D14();
  L25():
    goto L27();
  L27():
    new_names1 = ld `new.names`;
    check L104() else D21();
  L59():
    cut_names5 = ld `cut.names`;
    check L61() else D2();
  L60():
    r14 = dyn base3(<sym cut.names>);
    goto L14(r14);
  L63():
    sym5 = ldf nchar;
    base5 = ldf nchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  L64():
    r16 = dyn base4(<lang `<-`(long, `>`(nchar(col.names, "bytes", keepNA=FALSE), maxL))>);
    goto L15(r16);
  L84():
    p6 = prom<V +>{
      data_frame = ld `data.frame`;
      data_frame1 = force? data_frame;
      checkMissing(data_frame1);
      return data_frame1;
    };
    r42 = dyn formals(p6);
    check L85() else D12();
  L87():
    dr4 = tryDispatchBuiltin.1("[", r40);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L89() else L88(dr4);
  L88(r45):
    __1 = ldf `[` in base;
    r46 = dyn __1(r45, -1);
    goto L23(r46);
  L94():
    m1 = force? m;
    checkMissing(m1);
    any1 = ldf any in base;
    r50 = dyn any1(m1);
    check L95() else D17();
  L96():
    paste1 = ldf paste0;
    check L97() else D18();
  D2():
    deopt 10 [cut_names5];
  D12():
    deopt 53 [r42];
  D14():
    deopt 59 [col_names7];
  D17():
    deopt 71 [r50];
  D18():
    deopt 74 [];
  D21():
    deopt 85 [new_names1];
  L16(r19):
    maxL = ld maxL;
    check L69() else D6();
  L17():
    st `cut.names` = FALSE;
    goto L19(FALSE);
  L19(r35):
    goto L20();
  L61():
    cut_names6 = force? cut_names5;
    checkMissing(cut_names6);
    as_integer = ldf `as.integer` in base;
    r15 = dyn as_integer(cut_names6);
    check L62() else D3();
  L65():
    col_names1 = ld `col.names`;
    check L67() else D4();
  L66():
    r18 = dyn base5[, , keepNA](<sym col.names>, "bytes", FALSE);
    goto L16(r18);
  L71():
    paste = ldf paste;
    check L72() else D8();
  L85():
    names1 = ldf names in base;
    r43 = dyn names1(r42);
    check L86() else D13();
  L89():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L23(dx4);
  L90():
    col_names8 = force? col_names7;
    checkMissing(col_names8);
    match = ldf match in base;
    r47 = dyn match(dx5, col_names8, 0, NULL);
    check L91() else D15();
  L95():
    goto L24(r50);
  L97():
    p7 = prom<V +>{
      col_names9 = ld `col.names`;
      col_names10 = force? col_names9;
      checkMissing(col_names10);
      c8 = `is.object`(col_names10);
      if c8 then L1() else L2(col_names10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", col_names10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(col_names12):
      m2 = ld m;
      m3 = force? m2;
      __2 = ldf `[` in base;
      r51 = dyn __2(col_names12, m3);
      goto L0(r51);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r53 = dyn paste1("..adfl.", p7);
    check L98() else D19();
  L104():
    new_names2 = force? new_names1;
    checkMissing(new_names2);
    c10 = `as.logical`(new_names2);
    if c10 then L28(c10) else L105();
  D3():
    deopt 13 [r15];
  D4():
    deopt 19 [col_names1];
  D6():
    deopt 25 [r19, maxL];
  D8():
    deopt 32 [];
  D13():
    deopt 55 [r43];
  D15():
    deopt 64 [r47];
  D19():
    deopt 77 [r53];
  L28(c11):
    c16 = `as.logical`(c11);
    if c16 then L29(c16) else L108();
  L62():
    goto L14(r15);
  L67():
    col_names2 = force? col_names1;
    checkMissing(col_names2);
    nchar = ldf nchar in base;
    r20 = dyn nchar(col_names2, "bytes", FALSE, FALSE);
    check L68() else D5();
  L69():
    maxL1 = force? maxL;
    checkMissing(maxL1);
    r21 = `>`(r19, maxL1);
    st long = r21;
    any = ldf any in base;
    r22 = dyn any(r21);
    check L70() else D7();
  L72():
    p5 = prom<V +>{
      substr = ldf substr;
      p3 = prom<V +>{
        col_names3 = ld `col.names`;
        col_names4 = force? col_names3;
        checkMissing(col_names4);
        c4 = `is.object`(col_names4);
        if c4 then L1() else L2(col_names4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", col_names4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(col_names6):
        long = ld long;
        long1 = force? long;
        __ = ldf `[` in base;
        r23 = dyn __(col_names6, long1);
        goto L0(r23);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p4 = prom<V +>{
        maxL2 = ld maxL;
        maxL3 = force? maxL2;
        checkMissing(maxL3);
        r25 = `-`(maxL3, 6);
        return r25;
      };
      r27 = dyn substr(p3, 1, p4);
      return r27;
    };
    r29 = dyn paste(p5, "...");
    check L73() else D9();
  L86():
    goto L22(r43);
  L91():
    goto L21(r47);
  L98():
    l3 = ld `col.names`;
    c9 = `is.object`(l3);
    if c9 then L99() else L100(r53, l3);
  L105():
    any_m = ld `any.m`;
    check L106() else D22();
  D5():
    deopt 25 [r20];
  D7():
    deopt 30 [r22];
  D9():
    deopt 35 [r29];
  D22():
    deopt 87 [c10, any_m];
  L26(r57, dx9):
    st `col.names` = dx9;
    goto L27();
  L29(c17):
    c22 = `as.logical`(c17);
    if c22 then L111() else L30();
  L68():
    goto L16(r20);
  L70():
    goto L15(r22);
  L73():
    l = ld `col.names`;
    c5 = `is.object`(l);
    if c5 then L74() else L75(r29, l);
  L99():
    dr8 = tryDispatchBuiltin.0("[<-", l3, r53);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L101() else L100(r53, dr8);
  L100(r55, l5):
    m4 = ld m;
    check L102() else D20();
  L106():
    any_m1 = force? any_m;
    checkMissing(any_m1);
    c13 = `as.logical`(any_m1);
    c14 = `||`(c10, c13);
    goto L28(c14);
  L108():
    cut_names7 = ld `cut.names`;
    check L109() else D23();
  D20():
    deopt 79 [r55, l5, r53, m4];
  D23():
    deopt 90 [c16, cut_names7];
  L18(r33, dx3):
    st `col.names` = dx3;
    goto L19(r33);
  L30():
    goto L31();
  L31():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L116() else L117();
  L74():
    dr2 = tryDispatchBuiltin.0("[<-", l, r29);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L76() else L75(r29, dr2);
  L75(r31, l2):
    long2 = ld long;
    check L77() else D10();
  L101():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L26(r53, dx8);
  L102():
    m5 = force? m4;
    ___1 = ldf `[<-` in base;
    r58 = dyn ___1(l5, r53, m5);
    goto L26(r55, r58);
  L109():
    cut_names8 = force? cut_names7;
    checkMissing(cut_names8);
    c19 = `as.logical`(cut_names8);
    c20 = `||`(c16, c19);
    goto L29(c20);
  L111():
    col_names13 = ld `col.names`;
    check L112() else D24();
  D10():
    deopt 37 [r31, l2, r29, long2];
  D24():
    deopt 93 [col_names13];
  L32(r62):
    st alis = r62;
    do_call = ldf `do.call`;
    check L133() else D34();
  L76():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(r29, dx2);
  L77():
    long3 = force? long2;
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l2, r29, long3);
    goto L18(r31, r34);
  L112():
    col_names14 = force? col_names13;
    checkMissing(col_names14);
    l6 = ld x;
    names__ = ldf `names<-`;
    check L113() else D25();
  L116():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L118() else L119();
  L117():
    r61 = dyn base9(<lang list(check.names=check.names, fix.empty.names=fix.empty.names, stringsAsFactors=stringsAsFactors)>, <lang if(`!`(missing(row.names)), list(row.names=row.names))>);
    goto L32(r61);
  D25():
    deopt 96 [col_names14, l6, col_names14];
  D34():
    deopt 134 [];
  L33(r64):
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L124() else L125();
  L113():
    r60 = dyn names__(l6, NULL, col_names14);
    check L114() else D26();
  L118():
    check_names1 = ld `check.names`;
    check L120() else D27();
  L119():
    r63 = dyn base10[`check.names`, `fix.empty.names`, stringsAsFactors](<sym check.names>, <sym fix.empty.names>, <sym stringsAsFactors>);
    goto L33(r63);
  L133():
    p8 = prom<V +>{
      data_frame2 = ld `data.frame`;
      data_frame3 = force? data_frame2;
      checkMissing(data_frame3);
      return data_frame3;
    };
    p9 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      alis = ld alis;
      alis1 = force? alis;
      checkMissing(alis1);
      c25 = ldf c in base;
      r78 = dyn c25(x4, alis1);
      goto L0(r78);
    L2():
      r76 = dyn base13(<sym x>, <sym alis>);
      goto L0(r76);
    };
    r80 = dyn do_call(p8, p9);
    check L134() else D35();
  D26():
    deopt 98 [col_names14, r60];
  D27():
    deopt 106 [check_names1];
  D35():
    deopt 137 [r80];
  L34(r67):
    r69 = `!`(r67);
    c23 = `as.logical`(r69);
    if c23 then L126() else L35();
  L114():
    st x = r60;
    goto L31();
  L120():
    check_names2 = force? check_names1;
    checkMissing(check_names2);
    fix_empty_names1 = ld `fix.empty.names`;
    check L121() else D28();
  L124():
    missing1 = ldf missing in base;
    r68 = dyn missing1(<sym row.names>);
    goto L34(r68);
  L125():
    r66 = dyn base11(<sym row.names>);
    goto L34(r66);
  L134():
    st x = r80;
    new_names3 = ld `new.names`;
    check L135() else D36();
  D28():
    deopt 109 [fix_empty_names1];
  D36():
    deopt 139 [new_names3];
  L35():
    goto L37(NULL);
  L37(r73):
    c24 = ldf c in base;
    r74 = dyn c24(r64, r73);
    check L132() else D33();
  L121():
    fix_empty_names2 = force? fix_empty_names1;
    checkMissing(fix_empty_names2);
    stringsAsFactors1 = ld stringsAsFactors;
    check L122() else D29();
  L126():
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L127() else L128();
  L135():
    new_names4 = force? new_names3;
    checkMissing(new_names4);
    c26 = `as.logical`(new_names4);
    if c26 then L136() else L38(c26);
  D29():
    deopt 112 [stringsAsFactors1];
  D33():
    deopt 131 [r74];
  L36(r71):
    goto L37(r71);
  L38(c28):
    c32 = `as.logical`(c28);
    if c32 then L139() else L39(c32);
  L122():
    stringsAsFactors2 = force? stringsAsFactors1;
    checkMissing(stringsAsFactors2);
    list = ldf list in base;
    r65 = dyn list(check_names2, fix_empty_names2, stringsAsFactors2);
    check L123() else D30();
  L127():
    row_names1 = ld `row.names`;
    check L129() else D31();
  L128():
    r70 = dyn base12[`row.names`](<sym row.names>);
    goto L36(r70);
  L132():
    goto L32(r74);
  L136():
    check_names3 = ld `check.names`;
    check L137() else D37();
  D30():
    deopt 116 [r65];
  D31():
    deopt 123 [row_names1];
  D37():
    deopt 141 [c26, check_names3];
  L39(c34):
    c47 = `as.logical`(c34);
    if c47 then L152() else L43(c47);
  L123():
    goto L33(r65);
  L129():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    list1 = ldf list in base;
    r72 = dyn list1(row_names2);
    check L130() else D32();
  L137():
    check_names4 = force? check_names3;
    checkMissing(check_names4);
    r81 = `!`(check_names4);
    c29 = `as.logical`(r81);
    c30 = `&&`(c26, c29);
    goto L38(c30);
  L139():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L140() else L141();
  D32():
    deopt 127 [r72];
  L40(c37, r83):
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L147() else L148();
  L43(c49):
    c59 = `as.logical`(c49);
    if c59 then L161() else L46();
  L130():
    goto L36(r72);
  L140():
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L142() else L143();
  L141():
    r82 = dyn base14(<lang names(x)>);
    goto L40(c32, r82);
  L152():
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L153() else L154();
  L41(c40, r85):
    length = ldf length in base;
    r87 = dyn length(r85);
    check L146() else D40();
  L42(c43, r91, r92):
    r94 = `==`(r91, r92);
    c44 = `as.logical`(r94);
    c45 = `&&`(c43, c44);
    goto L39(c45);
  L44(c52, r96):
    c56 = `as.logical`(r96);
    c57 = `&&`(c52, c56);
    goto L43(c57);
  L46():
    goto L49();
  L49():
    any_m2 = ld `any.m`;
    check L176() else D53();
  L142():
    x5 = ld x;
    check L144() else D38();
  L143():
    r84 = dyn base15(<sym x>);
    goto L41(c32, r84);
  L147():
    col_names16 = ld `col.names`;
    check L149() else D41();
  L148():
    r90 = dyn base16(<sym col.names>);
    goto L42(c37, r83, r90);
  L153():
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L155() else L156();
  L154():
    r95 = dyn base17(<lang `<-`(naNm, is.na(col.names))>);
    goto L44(c47, r95);
  L161():
    col_names20 = ld `col.names`;
    check L162() else D46();
  D38():
    deopt 149 [c32, x5];
  D40():
    deopt 154 [c40, r87];
  D41():
    deopt 156 [c37, r83, col_names16];
  D46():
    deopt 174 [col_names20];
  D53():
    deopt 193 [any_m2];
  L45(c55, r98):
    st naNm = r98;
    any2 = ldf any in base;
    r100 = dyn any2(r98);
    check L159() else D45();
  L144():
    x6 = force? x5;
    checkMissing(x6);
    names2 = ldf names in base;
    r86 = dyn names2(x6);
    check L145() else D39();
  L146():
    goto L40(c40, r87);
  L149():
    col_names17 = force? col_names16;
    checkMissing(col_names17);
    length1 = ldf length in base;
    r93 = dyn length1(col_names17);
    check L150() else D42();
  L155():
    col_names18 = ld `col.names`;
    check L157() else D43();
  L156():
    r97 = dyn base18(<sym col.names>);
    goto L45(c47, r97);
  L162():
    col_names21 = force? col_names20;
    checkMissing(col_names21);
    c60 = `is.object`(col_names21);
    if c60 then L163() else L164(col_names21);
  L176():
    any_m3 = force? any_m2;
    checkMissing(any_m3);
    c62 = `as.logical`(any_m3);
    if c62 then L177() else L50();
  D39():
    deopt 152 [c32, r86];
  D42():
    deopt 159 [c37, r83, r93];
  D43():
    deopt 166 [c47, col_names18];
  D45():
    deopt 172 [c55, r100];
  L47(dx11):
    l7 = ld x;
    names3 = ldf names;
    check L167() else D48();
  L50():
    goto L51();
  L51():
    x9 = ld x;
    check L183() else D58();
  L145():
    goto L41(c32, r86);
  L150():
    goto L42(c37, r83, r93);
  L157():
    col_names19 = force? col_names18;
    checkMissing(col_names19);
    is_na = ldf `is.na` in base;
    r99 = dyn is_na(col_names19);
    check L158() else D44();
  L159():
    goto L44(c55, r100);
  L163():
    dr10 = tryDispatchBuiltin.1("[", col_names21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L165() else L164(dr10);
  L164(col_names23):
    naNm = ld naNm;
    check L166() else D47();
  L177():
    sub = ldf sub;
    check L178() else D54();
  D44():
    deopt 169 [c47, r99];
  D47():
    deopt 176 [col_names23, naNm];
  D48():
    deopt 180 [dx11, l7, dx11];
  D54():
    deopt 196 [];
  D58():
    deopt 208 [x9];
  L158():
    goto L45(c47, r99);
  L165():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L47(dx10);
  L166():
    naNm1 = force? naNm;
    __3 = ldf `[` in base;
    r101 = dyn __3(col_names23, naNm1);
    goto L47(r101);
  L167():
    r102 = dyn names3(dx11, NULL);
    check L168() else D49();
  L178():
    p10 = prom<V +>{
      sym19 = ldf names;
      base19 = ldf names in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r108):
      return r108;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      names4 = ldf names in base;
      r109 = dyn names4(x8);
      goto L0(r109);
    L2():
      r107 = dyn base19(<sym x>);
      goto L0(r107);
    };
    r111 = dyn sub("^\\.\\.adfl\\.", "", p10);
    check L179() else D55();
  L183():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  D49():
    deopt 182 [dx11, l7, dx11, r102];
  D55():
    deopt 200 [r111];
  L168():
    c61 = `is.object`(r102);
    if c61 then L169() else L170(dx11, l7, r102);
  L179():
    l12 = ld x;
    names__2 = ldf `names<-`;
    check L180() else D56();
  D56():
    deopt 202 [r111, l12, r111];
  L48(dx16, l11, dx17):
    names__1 = ldf `names<-`;
    check L173() else D51();
  L169():
    dr12 = tryDispatchBuiltin.0("[<-", r102, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L171() else L170(dx11, l7, dr12);
  L170(dx13, l9, r104):
    naNm2 = ld naNm;
    check L172() else D50();
  L180():
    r112 = dyn names__2(l12, NULL, r111);
    check L181() else D57();
  D50():
    deopt 184 [dx13, l9, r104, dx11, naNm2];
  D51():
    deopt 187 [dx16, l11, dx17];
  D57():
    deopt 204 [r111, r112];
  L171():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L48(dx11, l7, dx15);
  L172():
    naNm3 = force? naNm2;
    ___2 = ldf `[<-` in base;
    r105 = dyn ___2(r104, dx11, naNm3);
    goto L48(dx13, l9, r105);
  L173():
    r106 = dyn names__1(l11, NULL, dx17);
    check L174() else D52();
  L181():
    st x = r112;
    goto L51();
  D52():
    deopt 189 [dx16, r106];
  L174():
    st x = r106;
    goto L49();
  }
}