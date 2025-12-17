fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_package_code_unload_functions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg r6:V, reg character:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg length:cls, reg r10:V, reg c2:L, reg unlist:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r12:V, reg _in_:cls, reg unlist1:cls, reg lapply:cls, reg y:*, reg y1:V, reg p1:p(V +), reg names:*, reg names1:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg r20:cls, reg r21:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg res:*, reg res1:V, reg unlist2:cls, reg Map:cls, reg _fmt_entries_for_file:*, reg _fmt_entries_for_file1:V, reg p5:p(V +), reg x7:*, reg x8:V, reg p6:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg x9:*, reg x10:V, reg names2:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg p8:p(V +), reg r32:V, reg has_bad_wrong_args:*, reg has_bad_wrong_args1:V, reg c3:L, reg strwrap:cls, reg gettextf:cls, reg sQuote:cls, reg r33:V, reg p9:p(V +), reg r35:V, reg p10:p(V +), reg r37:V, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg call:*, reg call1:V, reg length1:cls, reg r41:V, reg c4:L, reg strwrap1:cls, reg gettextf1:cls, reg sQuote1:cls, reg r42:V, reg p11:p(V +), reg r44:V, reg p12:p(V +), reg r46:V, reg r47:V, reg gettextf2:cls, reg sQuote2:cls, reg r48:V, reg p13:p(V +), reg r50:V, reg c5:cls, reg r51:V, reg res2:*, reg res3:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L19() else L2();
  L13():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L14():
    r = dyn base(<lang attr(x, ".Last.lib")>);
    goto L0(r);
  L1(r3):
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    character = ldf character;
    check L21() else D2();
  L3(r6):
    st res = r6;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L15():
    x1 = ld x;
    check L17() else D0();
  L16():
    r2 = dyn base1(<sym x>, ".Last.lib");
    goto L1(r2);
  L19():
    goto L3("NB: .Last.lib will not be used unless it is exported");
  D0():
    deopt 3 [x1];
  D2():
    deopt 13 [];
  L4(r9):
    c2 = `as.logical`(r9);
    if c2 then L27() else L5();
  L17():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, ".Last.lib");
    check L18() else D1();
  L21():
    r7 = dyn character();
    check L22() else D3();
  L23():
    x3 = ld x;
    check L25() else D4();
  L24():
    r8 = dyn base2(<sym x>);
    goto L4(r8);
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r7];
  D4():
    deopt 18 [x3];
  L5():
    goto L12();
  L12():
    res2 = ld res;
    check L54() else D23();
  L18():
    goto L1(r4);
  L22():
    goto L3(r7);
  L25():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r10 = dyn length(x4);
    check L26() else D5();
  L27():
    unlist = ldf unlist;
    check L28() else D6();
  D5():
    deopt 21 [r10];
  D6():
    deopt 23 [];
  D23():
    deopt 86 [res2];
  L26():
    goto L4(r10);
  L28():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r12 = dyn unlist[, recursive](p, FALSE);
    check L29() else D7();
  L54():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D7():
    deopt 27 [r12];
  L29():
    st y = r12;
    _in_ = ldf `%in%`;
    check L30() else D8();
  D8():
    deopt 30 [];
  L30():
    p4 = prom<V +>{
      unlist1 = ldf unlist;
      p3 = prom<V +>{
        lapply = ldf lapply;
        p1 = prom<V +>{
          y = ld y;
          y1 = force? y;
          checkMissing(y1);
          return y1;
        };
        p2 = prom<V +>{
          names = ld names;
          names1 = force? names;
          checkMissing(names1);
          return names1;
        };
        r15 = dyn lapply(p1, p2);
        return r15;
      };
      r17 = dyn unlist1(p3);
      return r17;
    };
    r19 = dyn _in_("bad_arg_names", p4);
    check L31() else D9();
  D9():
    deopt 33 [r19];
  L31():
    st has_bad_wrong_args = r19;
    r20 = clos inner2281728077;
    st `.fmt_entries_for_file` = r20;
    r21 = clos inner2281728077;
    st `.fmt_entries_for_function` = r21;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L6(r23):
    st res = r23;
    goto L12();
  L32():
    res = ld res;
    check L34() else D10();
  L33():
    r22 = dyn base3(<sym res>, <lang unlist(Map(.fmt_entries_for_file, x, names(x)), use.names=FALSE)>, <lang if(has_bad_wrong_args, strwrap(gettextf("Package detach functions should have one argument with name starting with %s.", sQuote("lib")), exdent=2))>, <lang if(length(call), strwrap(gettextf("Package detach functions should not call %s.", sQuote("library.dynam.unload")), exdent=2))>, <lang gettextf("See section %s in '%s'.", sQuote("Good practice"), "?.Last.lib")>);
    goto L6(r22);
  D10():
    deopt 43 [res];
  L34():
    res1 = force? res;
    checkMissing(res1);
    unlist2 = ldf unlist;
    check L35() else D11();
  D11():
    deopt 46 [];
  L35():
    p8 = prom<V +>{
      Map = ldf Map;
      p5 = prom<V +>{
        _fmt_entries_for_file = ld `.fmt_entries_for_file`;
        _fmt_entries_for_file1 = force? _fmt_entries_for_file;
        checkMissing(_fmt_entries_for_file1);
        return _fmt_entries_for_file1;
      };
      p6 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p7 = prom<V +>{
        sym4 = ldf names;
        base4 = ldf names in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r27):
        return r27;
      L1():
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        names2 = ldf names in base;
        r28 = dyn names2(x10);
        goto L0(r28);
      L2():
        r26 = dyn base4(<sym x>);
        goto L0(r26);
      };
      r30 = dyn Map(p5, p6, p7);
      return r30;
    };
    r32 = dyn unlist2[, `use.names`](p8, FALSE);
    check L36() else D12();
  D12():
    deopt 50 [r32];
  L36():
    has_bad_wrong_args = ld has_bad_wrong_args;
    check L37() else D13();
  D13():
    deopt 51 [has_bad_wrong_args];
  L37():
    has_bad_wrong_args1 = force? has_bad_wrong_args;
    checkMissing(has_bad_wrong_args1);
    c3 = `as.logical`(has_bad_wrong_args1);
    if c3 then L38() else L7();
  L7():
    goto L8(NULL);
  L8(r38):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L38():
    strwrap = ldf strwrap;
    check L39() else D14();
  D14():
    deopt 54 [];
  L9(r40):
    c4 = `as.logical`(r40);
    if c4 then L46() else L10();
  L39():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p9 = prom<V +>{
        sQuote = ldf sQuote;
        r33 = dyn sQuote("lib");
        return r33;
      };
      r35 = dyn gettextf("Package detach functions should have one argument with name starting with %s.", p9);
      return r35;
    };
    r37 = dyn strwrap[, exdent](p10, 2);
    check L40() else D15();
  L42():
    call = ld call;
    check L44() else D16();
  L43():
    r39 = dyn base5(<sym call>);
    goto L9(r39);
  D15():
    deopt 58 [r37];
  D16():
    deopt 63 [call];
  L10():
    goto L11(NULL);
  L11(r47):
    gettextf2 = ldf gettextf;
    check L50() else D20();
  L40():
    goto L8(r37);
  L44():
    call1 = force? call;
    checkMissing(call1);
    length1 = ldf length in base;
    r41 = dyn length1(call1);
    check L45() else D17();
  L46():
    strwrap1 = ldf strwrap;
    check L47() else D18();
  D17():
    deopt 66 [r41];
  D18():
    deopt 68 [];
  D20():
    deopt 76 [];
  L45():
    goto L9(r41);
  L47():
    p12 = prom<V +>{
      gettextf1 = ldf gettextf;
      p11 = prom<V +>{
        sQuote1 = ldf sQuote;
        r42 = dyn sQuote1("library.dynam.unload");
        return r42;
      };
      r44 = dyn gettextf1("Package detach functions should not call %s.", p11);
      return r44;
    };
    r46 = dyn strwrap1[, exdent](p12, 2);
    check L48() else D19();
  L50():
    p13 = prom<V +>{
      sQuote2 = ldf sQuote;
      r48 = dyn sQuote2("Good practice");
      return r48;
    };
    r50 = dyn gettextf2("See section %s in '%s'.", p13, "?.Last.lib");
    check L51() else D21();
  D19():
    deopt 72 [r46];
  D21():
    deopt 80 [r50];
  L48():
    goto L11(r46);
  L51():
    c5 = ldf c in base;
    r51 = dyn c5(res1, r32, r38, r47, r50);
    check L52() else D22();
  D22():
    deopt 82 [r51];
  L52():
    goto L6(r51);
  }
}
fun inner2281728077(e, f) {
  (reg e:*, reg f:*) -+> V { var e:*, var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gettextf:cls, reg sQuote:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg unlist:cls, reg Map:cls, reg _fmt_entries_for_function:*, reg _fmt_entries_for_function1:V, reg p2:p(V +), reg e1:*, reg e2:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg e3:*, reg e4:V, reg names:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg c:cls, reg r15:V |
    mkenv;
    st e = e;
    st f = f;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    gettextf = ldf gettextf;
    check L3() else D0();
  L2():
    r = dyn base(<lang gettextf("File %s:", sQuote(f))>, <lang unlist(Map(.fmt_entries_for_function, e, names(e)))>, "");
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r3 = dyn sQuote(p);
      return r3;
    };
    r5 = dyn gettextf("File %s:", p1);
    check L4() else D1();
  D1():
    deopt 6 [r5];
  L4():
    unlist = ldf unlist;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p5 = prom<V +>{
      Map = ldf Map;
      p2 = prom<V +>{
        _fmt_entries_for_function = ld `.fmt_entries_for_function`;
        _fmt_entries_for_function1 = force? _fmt_entries_for_function;
        checkMissing(_fmt_entries_for_function1);
        return _fmt_entries_for_function1;
      };
      p3 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      p4 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        names = ldf names in base;
        r10 = dyn names(e4);
        goto L0(r10);
      L2():
        r8 = dyn base1(<sym e>);
        goto L0(r8);
      };
      r12 = dyn Map(p2, p3, p4);
      return r12;
    };
    r14 = dyn unlist(p5);
    check L6() else D3();
  D3():
    deopt 10 [r14];
  L6():
    c = ldf c in base;
    r15 = dyn c(r5, r14, "");
    check L7() else D4();
  D4():
    deopt 13 [r15];
  L7():
    goto L0(r15);
  }
}