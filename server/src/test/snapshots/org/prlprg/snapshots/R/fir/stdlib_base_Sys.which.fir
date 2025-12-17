fun main() {
  () -+> V { reg r:cls, reg Sys_which:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V |
    mkenv;
    r = clos inner1074782916;
    st `Sys.which` = r;
    Sys_which = ldf `Sys.which`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("ftp", "ping", "texi2dvi", "this-does-not-exist");
      goto L0(r3);
    L2():
      r1 = dyn base("ftp", "ping", "texi2dvi", "this-does-not-exist");
      goto L0(r1);
    };
    r5 = dyn Sys_which(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner1074782916(names) {
  (reg names:*) -+> V { var names:*, reg character:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg names1:*, reg names2:V, reg length:cls, reg r2:V, reg p:p(V +), reg r4:V, reg names3:*, reg names4:V, reg l:*, reg names__:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg which:*, reg which1:V, reg nzchar:cls, reg r8:V, reg r9:V, reg c:L, reg warning:cls, reg r10:V, reg res:*, reg res1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg names5:*, reg names6:V, reg r15:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg i7:I, reg r17:V, reg names7:*, reg names8:V, reg c2:L, reg i9:I, reg names10:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r18:V, reg is_na:cls, reg r19:V, reg c3:L, reg l2:*, reg c4:L, reg i17:I, reg r21:L, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg dx3:V, reg i20:*, reg i21:V, reg ___:cls, reg r24:V, reg suppressWarnings:cls, reg system:cls, reg paste:cls, reg which2:*, reg which3:V, reg p1:p(V +), reg shQuote:cls, reg names11:*, reg names12:V, reg c5:L, reg names14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i24:*, reg i25:V, reg __1:cls, reg r27:V, reg p2:p(V +), reg r29:V, reg p3:p(V +), reg r31:V, reg p4:p(V +), reg r33:V, reg p5:p(V +), reg r35:V, reg grepl:cls, reg R_version:*, reg R_version1:V, reg c6:L, reg R_version3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r36:V, reg p6:p(V +), reg r38:V, reg c7:L, reg strsplit:cls, reg ans:*, reg ans1:V, reg c8:L, reg ans3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r39:V, reg p7:p(V +), reg r41:V, reg c9:L, reg i29:I, reg r43:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i31:I, reg dx11:V, reg __3:cls, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg i34:I, reg r46:V, reg tmp:*, reg tmp1:V, reg c10:L, reg i36:I, reg tmp3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i38:I, reg dx13:V, reg __4:cls, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg i41:I, reg r49:V, reg i42:*, reg i43:V, reg c11:cls, reg r50:V, reg identical:cls, reg r51:V, reg c12:L, reg i46:I, reg r52:V, reg i47:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg i50:I, reg r55:V, reg ans4:*, reg ans5:V, reg length1:cls, reg r56:V, reg c13:L, reg ans6:*, reg ans7:V, reg c14:L, reg i54:I, reg ans9:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i56:I, reg dx15:V, reg __5:cls, reg r57:V, reg i57:I, reg dx16:V, reg l5:*, reg c15:L, reg i59:I, reg dx18:V, reg l7:*, reg dr16:V, reg dc8:L, reg dx20:V, reg i61:I, reg dx22:V, reg i62:*, reg i63:V, reg ___1:cls, reg r58:V, reg file_exists:cls, reg res2:*, reg res3:V, reg c16:L, reg res5:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg i64:*, reg i65:V, reg __6:cls, reg r59:V, reg p8:p(V +), reg r61:V, reg r62:V, reg c17:L, reg l8:*, reg c18:L, reg i69:I, reg r64:S, reg l10:*, reg dr20:V, reg dc10:L, reg dx25:V, reg i71:I, reg r66:S, reg dx26:V, reg i72:*, reg i73:V, reg ___2:cls, reg r67:V, reg i74:I, reg res6:*, reg res7:V |
    mkenv;
    st names = names;
    character = ldf character;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      names1 = ld names;
      names2 = force? names1;
      checkMissing(names2);
      length = ldf length in base;
      r2 = dyn length(names2);
      goto L0(r2);
    L2():
      r = dyn base(<sym names>);
      goto L0(r);
    };
    r4 = dyn character(p);
    check L28() else D1();
  D1():
    deopt 3 [r4];
  L28():
    st res = r4;
    names3 = ld names;
    check L29() else D2();
  D2():
    deopt 5 [names3];
  L29():
    names4 = force? names3;
    checkMissing(names4);
    l = ld res;
    names__ = ldf `names<-`;
    check L30() else D3();
  D3():
    deopt 8 [names4, l, names4];
  L30():
    r5 = dyn names__(l, NULL, names4);
    check L31() else D4();
  D4():
    deopt 10 [names4, r5];
  L31():
    st res = r5;
    st which = "/usr/bin/which";
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L0(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L36() else L1();
  L32():
    which = ld which;
    check L34() else D5();
  L33():
    r6 = dyn base1(<sym which>);
    goto L0(r6);
  D5():
    deopt 17 [which];
  L1():
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L34():
    which1 = force? which;
    checkMissing(which1);
    nzchar = ldf nzchar in base;
    r8 = dyn nzchar(which1);
    check L35() else D6();
  L36():
    warning = ldf warning;
    check L37() else D7();
  D6():
    deopt 20 [r8];
  D7():
    deopt 23 [];
  L3(r14):
    s = toForSeq(r14);
    l1 = length(s);
    i = 0;
    goto L4(i);
  L35():
    goto L0(r8);
  L37():
    r10 = dyn warning("'which' was not found on this platform");
    check L38() else D8();
  L42():
    names5 = ld names;
    check L44() else D10();
  L43():
    r13 = dyn base2(<sym names>);
    goto L3(r13);
  D8():
    deopt 25 [r10];
  D10():
    deopt 32 [names5];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l1, i2);
    if c1 then L45() else L26();
  L38():
    res = ld res;
    check L39() else D9();
  L44():
    names6 = force? names5;
    checkMissing(names6);
    r15 = seq_along(names6);
    goto L3(r15);
  D9():
    deopt 26 [res];
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L39():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L45():
    res6 = ld res;
    check L107() else D32();
  D32():
    deopt 142 [res6];
  L5(i7, r17):
    c3 = `as.logical`(r17);
    if c3 then L54() else L7();
  L46():
    names7 = ld names;
    check L48() else D11();
  L47():
    r16 = dyn base3(<lang `[`(names, i)>);
    goto L5(i2, r16);
  L107():
    res7 = force? res6;
    checkMissing(res7);
    popenv;
    return res7;
  D11():
    deopt 37 [i2, names7];
  L7():
    suppressWarnings = ldf suppressWarnings;
    check L61() else D15();
  L48():
    names8 = force? names7;
    checkMissing(names8);
    c2 = `is.object`(names8);
    if c2 then L49() else L50(i2, names8);
  L54():
    l2 = ld res;
    c4 = `is.object`(l2);
    if c4 then L55() else L56(i7, NA_LGL, l2);
  D15():
    deopt 56 [i7];
  L6(i11, dx1):
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(dx1);
    check L53() else D13();
  L8(i19, dx3):
    st res = dx3;
    goto L4(i19);
  L49():
    dr = tryDispatchBuiltin.1("[", names8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(i2, dr);
  L50(i9, names10):
    i12 = ld i;
    check L52() else D12();
  L55():
    dr2 = tryDispatchBuiltin.0("[<-", l2, NA_LGL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(i7, NA_LGL, dr2);
  L56(i17, r21, l4):
    i20 = ld i;
    check L58() else D14();
  L61():
    p5 = prom<V +>{
      system = ldf system;
      p4 = prom<V +>{
        paste = ldf paste;
        p1 = prom<V +>{
          which2 = ld which;
          which3 = force? which2;
          checkMissing(which3);
          return which3;
        };
        p3 = prom<V +>{
          shQuote = ldf shQuote;
          p2 = prom<V +>{
            names11 = ld names;
            names12 = force? names11;
            checkMissing(names12);
            c5 = `is.object`(names12);
            if c5 then L1() else L2(names12);
          L0(dx5):
            return dx5;
          L1():
            dr4 = tryDispatchBuiltin.1("[", names12);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(names14):
            i24 = ld i;
            i25 = force? i24;
            __1 = ldf `[` in base;
            r27 = dyn __1(names14, i25);
            goto L0(r27);
          L3():
            dx4 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx4);
          };
          r29 = dyn shQuote(p2);
          return r29;
        };
        r31 = dyn paste(p1, p3);
        return r31;
      };
      r33 = dyn system[, intern, `ignore.stderr`](p4, TRUE, TRUE);
      return r33;
    };
    r35 = dyn suppressWarnings(p5);
    check L62() else D16();
  D12():
    deopt 39 [i9, names10, i12];
  D13():
    deopt 43 [i11, r19];
  D14():
    deopt 47 [i17, r21, l4, NA_LGL, i20];
  D16():
    deopt 58 [i7, r35];
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i2, dx);
  L52():
    i13 = force? i12;
    __ = ldf `[` in base;
    r18 = dyn __(names10, i13);
    goto L6(i9, r18);
  L53():
    goto L5(i11, r19);
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i7, dx2);
  L58():
    i21 = force? i20;
    ___ = ldf `[<-` in base;
    r24 = dyn ___(l4, NA_LGL, i21);
    goto L8(i17, r24);
  L62():
    st ans = r35;
    grepl = ldf grepl;
    check L63() else D17();
  D17():
    deopt 61 [i7];
  L63():
    p6 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c6 = `is.object`(R_version1);
      if c6 then L1() else L2(R_version1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", R_version1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(R_version3):
      r36 = `$`(R_version3, <sym os>);
      goto L0(r36);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r38 = dyn grepl("solaris", p6);
    check L64() else D18();
  D18():
    deopt 64 [i7, r38];
  L64():
    c7 = `as.logical`(r38);
    if c7 then L65() else L10();
  L10():
    goto L17(i7);
  L17(i47):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L65():
    strsplit = ldf strsplit;
    check L66() else D19();
  D19():
    deopt 66 [i7];
  L18(i50, r55):
    c13 = `as.logical`(r55);
    if c13 then L89() else L19();
  L66():
    p7 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      c8 = `is.object`(ans1);
      if c8 then L1() else L2(ans1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", ans1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(ans3):
      __2 = ldf `[` in base;
      r39 = dyn __2(ans3, 1.0);
      goto L0(r39);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r41 = dyn strsplit[, , fixed](p7, " ", TRUE);
    check L67() else D20();
  L85():
    ans4 = ld ans;
    check L87() else D25();
  L86():
    r54 = dyn base6(<sym ans>);
    goto L18(i47, r54);
  D20():
    deopt 71 [i7, r41];
  D25():
    deopt 109 [i47, ans4];
  L19():
    goto L21(i50, "");
  L21(i57, dx16):
    l5 = ld res;
    c15 = `is.object`(l5);
    if c15 then L95() else L96(i57, dx16, l5);
  L67():
    c9 = `is.object`(r41);
    if c9 then L68() else L69(i7, r41);
  L87():
    ans5 = force? ans4;
    checkMissing(ans5);
    length1 = ldf length in base;
    r56 = dyn length1(ans5);
    check L88() else D26();
  L89():
    ans6 = ld ans;
    check L90() else D27();
  D26():
    deopt 112 [i47, r56];
  D27():
    deopt 113 [i50, ans6];
  L11(i31, dx11):
    st tmp = dx11;
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L22(i61, dx22):
    st res = dx22;
    file_exists = ldf `file.exists`;
    check L99() else D29();
  L68():
    dr10 = tryDispatchBuiltin.1("[[", r41);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L70() else L69(i7, dr10);
  L69(i29, r43):
    __3 = ldf `[[` in base;
    r44 = dyn __3(r43, 1.0);
    goto L11(i29, r44);
  L88():
    goto L18(i47, r56);
  L90():
    ans7 = force? ans6;
    checkMissing(ans7);
    c14 = `is.object`(ans7);
    if c14 then L91() else L92(i50, ans7);
  L95():
    dr16 = tryDispatchBuiltin.0("[<-", l5, dx16);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L97() else L96(i57, dx16, dr16);
  L96(i59, dx18, l7):
    i62 = ld i;
    check L98() else D28();
  D28():
    deopt 121 [i59, dx18, l7, dx16, i62];
  D29():
    deopt 126 [i61];
  L12(i34, r46):
    c12 = `as.logical`(r46);
    if c12 then L82() else L15();
  L20(i56, dx15):
    goto L21(i56, dx15);
  L70():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(i7, dx10);
  L71():
    tmp = ld tmp;
    check L73() else D21();
  L72():
    r45 = dyn base4(<lang `[`(tmp, `:`(1.0, 3.0))>, <lang c("no", i, "in")>);
    goto L12(i31, r45);
  L91():
    dr14 = tryDispatchBuiltin.1("[", ans7);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L93() else L92(i50, dr14);
  L92(i54, ans9):
    __5 = ldf `[` in base;
    r57 = dyn __5(ans9, 1.0);
    goto L20(i54, r57);
  L97():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L22(i57, dx20);
  L98():
    i63 = force? i62;
    ___1 = ldf `[<-` in base;
    r58 = dyn ___1(l7, dx16, i63);
    goto L22(i59, r58);
  L99():
    p8 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      c16 = `is.object`(res3);
      if c16 then L1() else L2(res3);
    L0(dx24):
      return dx24;
    L1():
      dr18 = tryDispatchBuiltin.1("[", res3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(res5):
      i64 = ld i;
      i65 = force? i64;
      __6 = ldf `[` in base;
      r59 = dyn __6(res5, i65);
      goto L0(r59);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx23);
    };
    r61 = dyn file_exists(p8);
    check L100() else D30();
  D21():
    deopt 78 [i31, tmp];
  D30():
    deopt 128 [i61, r61];
  L15():
    goto L16(i34, NULL);
  L16(i46, r52):
    goto L17(i46);
  L73():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    c10 = `is.object`(tmp1);
    if c10 then L74() else L75(i31, tmp1);
  L82():
    st ans = "";
    goto L16(i34, "");
  L93():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L20(i50, dx14);
  L100():
    r62 = `!`(r61);
    c17 = `as.logical`(r62);
    if c17 then L101() else L23();
  L13(i38, dx13):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L77() else L78();
  L23():
    goto L25(i61);
  L25(i74):
    goto L4(i74);
  L74():
    dr12 = tryDispatchBuiltin.1("[", tmp1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L76() else L75(i31, dr12);
  L75(i36, tmp3):
    __4 = ldf `[` in base;
    r47 = dyn __4(tmp3, <int 1, 2, 3>);
    goto L13(i36, r47);
  L101():
    l8 = ld res;
    c18 = `is.object`(l8);
    if c18 then L102() else L103(i61, "", l8);
  L14(i41, r49):
    identical = ldf identical in base;
    r51 = dyn identical(dx13, r49, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L81() else D24();
  L24(i71, r66, dx26):
    st res = dx26;
    goto L25(i71);
  L76():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L13(i31, dx12);
  L77():
    i42 = ld i;
    check L79() else D22();
  L78():
    r48 = dyn base5("no", <sym i>, "in");
    goto L14(i38, r48);
  L102():
    dr20 = tryDispatchBuiltin.0("[<-", l8, "");
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L104() else L103(i61, "", dr20);
  L103(i69, r64, l10):
    i72 = ld i;
    check L105() else D31();
  D22():
    deopt 86 [i38, i42];
  D24():
    deopt 99 [i41, r51];
  D31():
    deopt 133 [i69, r64, l10, "", i72];
  L79():
    i43 = force? i42;
    checkMissing(i43);
    c11 = ldf c in base;
    r50 = dyn c11("no", i43, "in");
    check L80() else D23();
  L81():
    goto L12(i41, r51);
  L104():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L24(i61, "", dx25);
  L105():
    i73 = force? i72;
    ___2 = ldf `[<-` in base;
    r67 = dyn ___2(l10, "", i73);
    goto L24(i69, r64, r67);
  D23():
    deopt 90 [i38, r50];
  L80():
    goto L14(i38, r50);
  }
}