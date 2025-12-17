fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_startup_functions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg unlist:cls, reg _bad_call_names_in_startup_functions:*, reg _bad_call_names_in_startup_functions1:V, reg p:p(V +), reg r1:V, reg r2:cls, reg _find_calls_in_package_code:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg _get_startup_function_calls_in_file:*, reg _get_startup_function_calls_in_file1:V, reg p2:p(V +), reg r5:V, reg unlist1:cls, reg lapply:cls, reg calls:*, reg calls1:V, reg p3:p(V +), reg __:*, reg __1:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg Filter:cls, reg length:*, reg length1:V, reg p6:p(V +), reg lapply1:cls, reg calls2:*, reg calls3:V, reg p7:p(V +), reg r13:cls, reg p8:p(V +), reg r15:V, reg p9:p(V +), reg r17:V, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg FL:*, reg FL1:V, reg length2:cls, reg r20:V, reg c:L, reg l:*, reg attr__:cls, reg r21:V, reg l1:*, reg class__:cls, reg r23:V, reg calls4:*, reg calls5:V |
    mkenv;
    st dir = dir;
    unlist = ldf unlist;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      _bad_call_names_in_startup_functions = ld `.bad_call_names_in_startup_functions`;
      _bad_call_names_in_startup_functions1 = force? _bad_call_names_in_startup_functions;
      checkMissing(_bad_call_names_in_startup_functions1);
      return _bad_call_names_in_startup_functions1;
    };
    r1 = dyn unlist(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st bad_call_names = r1;
    r2 = clos inner785687786;
    st `.check_startup_function` = r2;
    _find_calls_in_package_code = ldf `.find_calls_in_package_code`;
    check L5() else D2();
  D2():
    deopt 9 [];
  L5():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p2 = prom<V +>{
      _get_startup_function_calls_in_file = ld `.get_startup_function_calls_in_file`;
      _get_startup_function_calls_in_file1 = force? _get_startup_function_calls_in_file;
      checkMissing(_get_startup_function_calls_in_file1);
      return _get_startup_function_calls_in_file1;
    };
    r5 = dyn _find_calls_in_package_code[, `.worker`](p1, p2);
    check L6() else D3();
  D3():
    deopt 13 [r5];
  L6():
    st calls = r5;
    unlist1 = ldf unlist;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p5 = prom<V +>{
      lapply = ldf lapply;
      p3 = prom<V +>{
        calls = ld calls;
        calls1 = force? calls;
        checkMissing(calls1);
        return calls1;
      };
      p4 = prom<V +>{
        __ = ld `[[`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      r8 = dyn lapply(p3, p4, ".First.lib");
      return r8;
    };
    r10 = dyn unlist1(p5);
    check L8() else D5();
  D5():
    deopt 18 [r10];
  L8():
    st FL = r10;
    Filter = ldf Filter;
    check L9() else D6();
  D6():
    deopt 21 [];
  L9():
    p6 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p9 = prom<V +>{
      lapply1 = ldf lapply;
      p7 = prom<V +>{
        calls2 = ld calls;
        calls3 = force? calls2;
        checkMissing(calls3);
        return calls3;
      };
      p8 = prom<V +>{
        r13 = clos inner3708401697;
        return r13;
      };
      r15 = dyn lapply1(p7, p8);
      return r15;
    };
    r17 = dyn Filter(p6, p9);
    check L10() else D7();
  D7():
    deopt 24 [r17];
  L10():
    st calls = r17;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r19):
    c = `as.logical`(r19);
    if c then L15() else L1();
  L11():
    FL = ld FL;
    check L13() else D8();
  L12():
    r18 = dyn base(<sym FL>);
    goto L0(r18);
  D8():
    deopt 28 [FL];
  L1():
    goto L2();
  L2():
    l1 = ld calls;
    class__ = ldf `class<-`;
    check L19() else D12();
  L13():
    FL1 = force? FL;
    checkMissing(FL1);
    length2 = ldf length in base;
    r20 = dyn length2(FL1);
    check L14() else D9();
  L15():
    l = ld calls;
    attr__ = ldf `attr<-`;
    check L16() else D10();
  D9():
    deopt 31 [r20];
  D10():
    deopt 35 [TRUE, l, TRUE];
  D12():
    deopt 45 ["check_package_code_startup_functions", l1, "check_package_code_startup_functions"];
  L14():
    goto L0(r20);
  L16():
    r21 = dyn attr__(l, NULL, ".First.lib", TRUE);
    check L17() else D11();
  L19():
    r23 = dyn class__(l1, NULL, "check_package_code_startup_functions");
    check L20() else D13();
  D11():
    deopt 38 [TRUE, r21];
  D13():
    deopt 47 ["check_package_code_startup_functions", r23];
  L17():
    st calls = r21;
    goto L2();
  L20():
    st calls = r23;
    calls4 = ld calls;
    check L21() else D14();
  D14():
    deopt 49 [calls4];
  L21():
    calls5 = force? calls4;
    checkMissing(calls5);
    popenv;
    return calls5;
  }
}
fun inner785687786(fcode, fname) {
  (reg fcode:*, reg fname:*) -+> V { var fcode:*, var fname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg fcode1:*, reg fcode2:V, reg c:L, reg fcode4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg names:cls, reg r6:V, reg _notin_:cls, reg nms:*, reg nms1:V, reg p:p(V +), reg r8:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg nms2:*, reg nms3:V, reg length:cls, reg r11:V, reg r12:V, reg c7:L, reg c8:L, reg c9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c16:L, reg c17:L, reg r14:V, reg substr:cls, reg nms4:*, reg nms5:V, reg p1:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg c22:L, reg c23:L, reg r20:V, reg r21:V, reg c24:cls, reg r22:V, reg r23:V, reg any:cls, reg r24:V, reg c25:L, reg c26:V, reg c29:L, reg c30:V, reg c32:L, reg nms6:*, reg nms7:V, reg l:*, reg c33:L, reg nms9:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg nms11:V, reg dx3:V, reg r25:V, reg _find_calls:cls, reg fcode5:*, reg fcode6:V, reg c34:L, reg fcode8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r26:V, reg p2:p(V +), reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg calls:*, reg calls1:V, reg length1:cls, reg r31:V, reg r32:V, reg c35:L, reg out:*, reg out1:V, reg _call_names:cls, reg calls2:*, reg calls3:V, reg p3:p(V +), reg r36:V, reg bad_call_names:*, reg bad_call_names1:V, reg fname1:*, reg fname2:V, reg r37:V, reg c36:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg bcn:*, reg bcn1:V, reg c37:cls, reg r40:V, reg fname3:*, reg fname4:V, reg r42:V, reg c38:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg bcn2:*, reg bcn3:V, reg c39:cls, reg r45:V, reg _in_:cls, reg cnames:*, reg cnames1:V, reg p4:p(V +), reg bcn4:*, reg bcn5:V, reg p5:p(V +), reg r49:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:V, reg ind:*, reg ind1:V, reg any1:cls, reg r52:V, reg c40:L, reg calls4:*, reg calls5:V, reg c41:L, reg calls7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r53:V, reg cnames2:*, reg cnames3:V, reg c42:L, reg cnames5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind4:*, reg ind5:V, reg __3:cls, reg r54:V, reg which:cls, reg cnames6:*, reg cnames7:V, reg r55:V, reg p6:p(V +), reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg pos:*, reg pos1:V, reg length2:cls, reg r60:V, reg c43:L, reg pos2:*, reg pos3:V, reg c44:L, reg pos5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg vapply:cls, reg calls8:*, reg calls9:V, reg c45:L, reg calls11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg pos6:*, reg pos7:V, reg __4:cls, reg r61:V, reg p7:p(V +), reg r63:cls, reg p8:p(V +), reg r65:V, reg __5:cls, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg pos8:*, reg pos9:V, reg length3:cls, reg r69:V, reg c46:L, reg calls12:*, reg calls13:V, reg c47:L, reg calls15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pos10:*, reg pos11:V, reg r70:V, reg __6:cls, reg r71:V, reg cnames8:*, reg cnames9:V, reg c48:L, reg cnames11:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg pos12:*, reg pos13:V, reg r72:V, reg __7:cls, reg r73:V, reg dx18:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg calls16:*, reg calls17:V, reg length4:cls, reg r76:V, reg c49:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r77:V, reg r78:V, reg calls18:*, reg calls19:V, reg cnames12:*, reg cnames13:V, reg list1:cls, reg r79:V, reg l3:*, reg c50:L, reg r81:V, reg l5:*, reg dr18:V, reg dc9:L, reg dx20:V, reg r83:V, reg dx21:V, reg r84:V, reg r85:V, reg out2:*, reg out3:V |
    mkenv;
    st fcode = fcode;
    st fname = fname;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L0(r1):
    st out = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L37():
    list = ldf list in base;
    r2 = dyn list();
    check L39() else D0();
  L38():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    st nms = r4;
    _notin_ = ldf `%notin%`;
    check L47() else D3();
  L39():
    goto L0(r2);
  L40():
    fcode1 = ld fcode;
    check L42() else D1();
  L41():
    r3 = dyn base1(<lang `[[`(fcode, 2)>);
    goto L1(r3);
  D1():
    deopt 7 [fcode1];
  D3():
    deopt 16 [];
  L42():
    fcode2 = force? fcode1;
    checkMissing(fcode2);
    c = `is.object`(fcode2);
    if c then L43() else L44(fcode2);
  L47():
    p = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r8 = dyn _notin_("...", p);
    check L48() else D4();
  D4():
    deopt 19 [r8];
  L2(dx1):
    names = ldf names in base;
    r6 = dyn names(dx1);
    check L46() else D2();
  L43():
    dr = tryDispatchBuiltin.1("[[", fcode2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(dr);
  L44(fcode4):
    __ = ldf `[[` in base;
    r5 = dyn __(fcode4, 2);
    goto L2(r5);
  L48():
    c1 = `as.logical`(r8);
    if c1 then L49() else L3(c1);
  D2():
    deopt 13 [r6];
  L3(c3):
    c32 = `as.logical`(c3);
    if c32 then L65() else L8();
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L46():
    goto L1(r6);
  L49():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L4(c6, r10):
    r12 = `!=`(r10, 2);
    c7 = `as.logical`(r12);
    if c7 then L5(c6, c7) else L54();
  L8():
    goto L9();
  L9():
    _find_calls = ldf `.find_calls`;
    check L72() else D12();
  L50():
    nms2 = ld nms;
    check L52() else D5();
  L51():
    r9 = dyn base2(<sym nms>);
    goto L4(c1, r9);
  L65():
    nms6 = ld nms;
    check L66() else D11();
  D5():
    deopt 22 [c1, nms2];
  D11():
    deopt 46 [nms6];
  D12():
    deopt 54 [];
  L5(c8, c9):
    c29 = `as.logical`(c9);
    c30 = `&&`(c8, c29);
    goto L3(c30);
  L52():
    nms3 = force? nms2;
    checkMissing(nms3);
    length = ldf length in base;
    r11 = dyn length(nms3);
    check L53() else D6();
  L54():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L66():
    nms7 = force? nms6;
    checkMissing(nms7);
    l = ld out;
    c33 = `is.object`(l);
    if c33 then L68() else L69(nms7, l);
  L72():
    p2 = prom<V +>{
      fcode5 = ld fcode;
      fcode6 = force? fcode5;
      checkMissing(fcode6);
      c34 = `is.object`(fcode6);
      if c34 then L1() else L2(fcode6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", fcode6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(fcode8):
      __1 = ldf `[[` in base;
      r26 = dyn __1(fcode8, 3);
      goto L0(r26);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r28 = dyn _find_calls[, recursive](p2, TRUE);
    check L73() else D13();
  D6():
    deopt 25 [c1, r11];
  D13():
    deopt 58 [r28];
  L6(c16, c17, r14):
    c25 = `as.logical`(r14);
    c26 = `||`(c17, c25);
    goto L5(c16, c26);
  L53():
    goto L4(c1, r11);
  L55():
    substr = ldf substr;
    check L57() else D7();
  L56():
    r13 = dyn base3(<lang `!=`(substr(nms, 1, 3), c("lib", "pkg"))>);
    goto L6(c6, c7, r13);
  L67(nms11, dx3):
    st out = dx3;
    goto L9();
  L68():
    dr2 = tryDispatchBuiltin.0("$<-", l, nms7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(nms7, dr2);
  L69(nms9, l2):
    r25 = `$<-`(l2, <sym bad_arg_names>, nms7);
    goto L67(nms9, r25);
  L73():
    st calls = r28;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  D7():
    deopt 31 [c6, c7];
  L10(r30):
    r32 = `!`(r30);
    c35 = `as.logical`(r32);
    if c35 then L78() else L11();
  L57():
    p1 = prom<V +>{
      nms4 = ld nms;
      nms5 = force? nms4;
      checkMissing(nms5);
      return nms5;
    };
    r16 = dyn substr(p1, 1, 3);
    check L58() else D8();
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L67(nms7, dx2);
  L74():
    calls = ld calls;
    check L76() else D14();
  L75():
    r29 = dyn base5(<sym calls>);
    goto L10(r29);
  D8():
    deopt 35 [c6, c7, r16];
  D14():
    deopt 62 [calls];
  L11():
    _call_names = ldf `.call_names`;
    check L82() else D17();
  L58():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L76():
    calls1 = force? calls;
    checkMissing(calls1);
    length1 = ldf length in base;
    r31 = dyn length1(calls1);
    check L77() else D15();
  L78():
    out = ld out;
    check L79() else D16();
  D15():
    deopt 65 [r31];
  D16():
    deopt 67 [out];
  D17():
    deopt 73 [];
  L7(c22, c23, r20, r21):
    r23 = `!=`(r20, r21);
    any = ldf any in base;
    r24 = dyn any(r23);
    check L62() else D10();
  L59():
    c24 = ldf c in base;
    r22 = dyn c24("lib", "pkg");
    check L61() else D9();
  L60():
    r19 = dyn base4("lib", "pkg");
    goto L7(c6, c7, r16, r19);
  L77():
    goto L10(r31);
  L79():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  L82():
    p3 = prom<V +>{
      calls2 = ld calls;
      calls3 = force? calls2;
      checkMissing(calls3);
      return calls3;
    };
    r36 = dyn _call_names(p3);
    check L83() else D18();
  D9():
    deopt 40 [c6, c7, r16, r22];
  D10():
    deopt 43 [c22, c23, r24];
  D18():
    deopt 75 [r36];
  L61():
    goto L7(c6, c7, r16, r22);
  L62():
    goto L6(c22, c23, r24);
  L83():
    st cnames = r36;
    bad_call_names = ld bad_call_names;
    check L84() else D19();
  D19():
    deopt 77 [bad_call_names];
  L84():
    bad_call_names1 = force? bad_call_names;
    checkMissing(bad_call_names1);
    st bcn = bad_call_names1;
    fname1 = ld fname;
    check L85() else D20();
  D20():
    deopt 80 [fname1];
  L85():
    fname2 = force? fname1;
    checkMissing(fname2);
    r37 = `==`(fname2, ".onAttach");
    c36 = `as.logical`(r37);
    if c36 then L86() else L13();
  L13():
    goto L15();
  L15():
    fname3 = ld fname;
    check L92() else D23();
  L86():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  D23():
    deopt 94 [fname3];
  L14(r39):
    st bcn = r39;
    goto L15();
  L87():
    bcn = ld bcn;
    check L89() else D21();
  L88():
    r38 = dyn base6(<sym bcn>, "library.dynam");
    goto L14(r38);
  L92():
    fname4 = force? fname3;
    checkMissing(fname4);
    r42 = `==`(fname4, ".onLoad");
    c38 = `as.logical`(r42);
    if c38 then L93() else L16();
  D21():
    deopt 86 [bcn];
  L16():
    goto L18();
  L18():
    _in_ = ldf `%in%`;
    check L99() else D26();
  L89():
    bcn1 = force? bcn;
    checkMissing(bcn1);
    c37 = ldf c in base;
    r40 = dyn c37(bcn1, "library.dynam");
    check L90() else D22();
  L93():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L94() else L95();
  D22():
    deopt 90 [r40];
  D26():
    deopt 109 [];
  L17(r44):
    st bcn = r44;
    goto L18();
  L90():
    goto L14(r40);
  L94():
    bcn2 = ld bcn;
    check L96() else D24();
  L95():
    r43 = dyn base7(<sym bcn>, "packageStartupMessage");
    goto L17(r43);
  L99():
    p4 = prom<V +>{
      cnames = ld cnames;
      cnames1 = force? cnames;
      checkMissing(cnames1);
      return cnames1;
    };
    p5 = prom<V +>{
      bcn4 = ld bcn;
      bcn5 = force? bcn4;
      checkMissing(bcn5);
      return bcn5;
    };
    r49 = dyn _in_(p4, p5);
    check L100() else D27();
  D24():
    deopt 100 [bcn2];
  D27():
    deopt 112 [r49];
  L96():
    bcn3 = force? bcn2;
    checkMissing(bcn3);
    c39 = ldf c in base;
    r45 = dyn c39(bcn3, "packageStartupMessage");
    check L97() else D25();
  L100():
    st ind = r49;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L101() else L102();
  D25():
    deopt 104 [r45];
  L19(r51):
    c40 = `as.logical`(r51);
    if c40 then L105() else L20();
  L97():
    goto L17(r45);
  L101():
    ind = ld ind;
    check L103() else D28();
  L102():
    r50 = dyn base8(<sym ind>);
    goto L19(r50);
  D28():
    deopt 116 [ind];
  L20():
    goto L36();
  L36():
    out2 = ld out;
    check L162() else D52();
  L103():
    ind1 = force? ind;
    checkMissing(ind1);
    any1 = ldf any in base;
    r52 = dyn any1(ind1);
    check L104() else D29();
  L105():
    calls4 = ld calls;
    check L106() else D30();
  D29():
    deopt 119 [r52];
  D30():
    deopt 120 [calls4];
  D52():
    deopt 200 [out2];
  L104():
    goto L19(r52);
  L106():
    calls5 = force? calls4;
    checkMissing(calls5);
    c41 = `is.object`(calls5);
    if c41 then L107() else L108(calls5);
  L162():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  L21(dx7):
    st calls = dx7;
    cnames2 = ld cnames;
    check L111() else D32();
  L107():
    dr6 = tryDispatchBuiltin.1("[", calls5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L109() else L108(dr6);
  L108(calls7):
    ind2 = ld ind;
    check L110() else D31();
  D31():
    deopt 122 [calls7, ind2];
  D32():
    deopt 126 [cnames2];
  L109():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx6);
  L110():
    ind3 = force? ind2;
    __2 = ldf `[` in base;
    r53 = dyn __2(calls7, ind3);
    goto L21(r53);
  L111():
    cnames3 = force? cnames2;
    checkMissing(cnames3);
    c42 = `is.object`(cnames3);
    if c42 then L112() else L113(cnames3);
  L22(dx9):
    st cnames = dx9;
    which = ldf which;
    check L116() else D34();
  L112():
    dr8 = tryDispatchBuiltin.1("[", cnames3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L114() else L113(dr8);
  L113(cnames5):
    ind4 = ld ind;
    check L115() else D33();
  D33():
    deopt 128 [cnames5, ind4];
  D34():
    deopt 133 [];
  L114():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L22(dx8);
  L115():
    ind5 = force? ind4;
    __3 = ldf `[` in base;
    r54 = dyn __3(cnames5, ind5);
    goto L22(r54);
  L116():
    p6 = prom<V +>{
      cnames6 = ld cnames;
      cnames7 = force? cnames6;
      checkMissing(cnames7);
      r55 = `==`(cnames7, "library");
      return r55;
    };
    r57 = dyn which(p6);
    check L117() else D35();
  D35():
    deopt 135 [r57];
  L117():
    st pos = r57;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L118() else L119();
  L23(r59):
    c43 = `as.logical`(r59);
    if c43 then L122() else L24();
  L118():
    pos = ld pos;
    check L120() else D36();
  L119():
    r58 = dyn base9(<sym pos>);
    goto L23(r58);
  D36():
    deopt 139 [pos];
  L24():
    goto L31();
  L31():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L146() else L147();
  L120():
    pos1 = force? pos;
    checkMissing(pos1);
    length2 = ldf length in base;
    r60 = dyn length2(pos1);
    check L121() else D37();
  L122():
    pos2 = ld pos;
    check L123() else D38();
  D37():
    deopt 142 [r60];
  D38():
    deopt 143 [pos2];
  L32(r75):
    c49 = `as.logical`(r75);
    if c49 then L150() else L33();
  L121():
    goto L23(r60);
  L123():
    pos3 = force? pos2;
    checkMissing(pos3);
    c44 = `is.object`(pos3);
    if c44 then L124() else L125(pos3);
  L146():
    calls16 = ld calls;
    check L148() else D47();
  L147():
    r74 = dyn base11(<sym calls>);
    goto L32(r74);
  D47():
    deopt 179 [calls16];
  L25(dx11):
    st pos = dx11;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L129() else L130();
  L33():
    goto L35(NULL);
  L35(r85):
    goto L36();
  L124():
    dr10 = tryDispatchBuiltin.1("[", pos3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L126() else L125(dr10);
  L125(pos5):
    vapply = ldf vapply;
    check L127() else D39();
  L148():
    calls17 = force? calls16;
    checkMissing(calls17);
    length4 = ldf length in base;
    r76 = dyn length4(calls17);
    check L149() else D48();
  L150():
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L151() else L152();
  D39():
    deopt 146 [pos5];
  D48():
    deopt 182 [r76];
  L26(r68):
    c46 = `as.logical`(r68);
    if c46 then L133() else L27();
  L34(r78):
    l3 = ld out;
    c50 = `is.object`(l3);
    if c50 then L157() else L158(r78, l3);
  L126():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L25(dx10);
  L127():
    p7 = prom<V +>{
      calls8 = ld calls;
      calls9 = force? calls8;
      checkMissing(calls9);
      c45 = `is.object`(calls9);
      if c45 then L1() else L2(calls9);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", calls9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(calls11):
      pos6 = ld pos;
      pos7 = force? pos6;
      __4 = ldf `[` in base;
      r61 = dyn __4(calls11, pos7);
      goto L0(r61);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p8 = prom<V +>{
      r63 = clos inner3708401697;
      return r63;
    };
    r65 = dyn vapply(p7, p8, NA_LGL);
    check L128() else D40();
  L129():
    pos8 = ld pos;
    check L131() else D41();
  L130():
    r67 = dyn base10(<sym pos>);
    goto L26(r67);
  L149():
    goto L32(r76);
  L151():
    calls18 = ld calls;
    check L153() else D49();
  L152():
    r77 = dyn base12[calls, names](<sym calls>, <sym cnames>);
    goto L34(r77);
  D40():
    deopt 150 [pos5, r65];
  D41():
    deopt 155 [pos8];
  D49():
    deopt 185 [calls18];
  L27():
    goto L30(NULL);
  L30(dx18):
    goto L31();
  L128():
    __5 = ldf `[` in base;
    r66 = dyn __5(pos5, r65);
    goto L25(r66);
  L131():
    pos9 = force? pos8;
    checkMissing(pos9);
    length3 = ldf length in base;
    r69 = dyn length3(pos9);
    check L132() else D42();
  L133():
    calls12 = ld calls;
    check L134() else D43();
  L153():
    calls19 = force? calls18;
    checkMissing(calls19);
    cnames12 = ld cnames;
    check L154() else D50();
  L156(r83, dx21):
    st out = dx21;
    goto L35(r83);
  L157():
    dr18 = tryDispatchBuiltin.0("$<-", l3, r78);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L159() else L158(r78, dr18);
  L158(r81, l5):
    r84 = `$<-`(l5, <sym bad_calls>, r78);
    goto L156(r81, r84);
  D42():
    deopt 158 [r69];
  D43():
    deopt 159 [calls12];
  D50():
    deopt 188 [cnames12];
  L132():
    goto L26(r69);
  L134():
    calls13 = force? calls12;
    checkMissing(calls13);
    c47 = `is.object`(calls13);
    if c47 then L135() else L136(calls13);
  L154():
    cnames13 = force? cnames12;
    checkMissing(cnames13);
    list1 = ldf list in base;
    r79 = dyn list1(calls19, cnames13);
    check L155() else D51();
  L159():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L156(r78, dx20);
  D51():
    deopt 192 [r79];
  L28(dx15):
    st calls = dx15;
    cnames8 = ld cnames;
    check L139() else D45();
  L135():
    dr14 = tryDispatchBuiltin.1("[", calls13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L137() else L136(dr14);
  L136(calls15):
    pos10 = ld pos;
    check L138() else D44();
  L155():
    goto L34(r79);
  D44():
    deopt 161 [calls15, pos10];
  D45():
    deopt 166 [cnames8];
  L137():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L28(dx14);
  L138():
    pos11 = force? pos10;
    checkMissing(pos11);
    r70 = `-`(<missing>, pos11);
    __6 = ldf `[` in base;
    r71 = dyn __6(calls15, r70);
    goto L28(r71);
  L139():
    cnames9 = force? cnames8;
    checkMissing(cnames9);
    c48 = `is.object`(cnames9);
    if c48 then L140() else L141(cnames9);
  L29(dx17):
    st cnames = dx17;
    goto L30(dx17);
  L140():
    dr16 = tryDispatchBuiltin.1("[", cnames9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L142() else L141(dr16);
  L141(cnames11):
    pos12 = ld pos;
    check L143() else D46();
  D46():
    deopt 168 [cnames11, pos12];
  L142():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L29(dx16);
  L143():
    pos13 = force? pos12;
    checkMissing(pos13);
    r72 = `-`(<missing>, pos13);
    __7 = ldf `[` in base;
    r73 = dyn __7(cnames11, r72);
    goto L29(r73);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg names:cls, reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg r8:V, reg any:cls, reg r9:V |
    mkenv;
    st e = e;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang `==`(`[`(names(e), `-`(1)), "help")>);
    goto L0(r);
  L1(r3):
    c = `is.object`(r3);
    if c then L9() else L10(r3);
  L5():
    e1 = ld e;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym e>);
    goto L1(r2);
  D0():
    deopt 4 [e1];
  L2(dx1):
    r8 = `==`(dx1, "help");
    any = ldf any in base;
    r9 = dyn any(r8);
    check L12() else D2();
  L7():
    e2 = force? e1;
    checkMissing(e2);
    names = ldf names in base;
    r4 = dyn names(e2);
    check L8() else D1();
  L9():
    dr = tryDispatchBuiltin.1("[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(r6):
    __ = ldf `[` in base;
    r7 = dyn __(r6, -1);
    goto L2(r7);
  D1():
    deopt 7 [r4];
  D2():
    deopt 14 [r9];
  L8():
    goto L1(r4);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L12():
    goto L0(r9);
  }
}