fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.checkS3methods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg r1:cls, reg r2:cls, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r3:V, reg p:p(V +), reg r5:V, reg _fmt_bad_all:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r7:V, reg show_possible_issues:*, reg show_possible_issues1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg s:*, reg s1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg attr:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg x5:*, reg x6:V, reg attr1:cls, reg r19:V, reg c1:cls, reg r20:V, reg length:cls, reg r21:V, reg c2:L, reg paste0:cls, reg _fmt_bad_all1:cls, reg bad:*, reg bad1:V, reg p2:p(V +), reg r23:V, reg p3:p(V +), reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg x7:*, reg x8:V, reg attr2:cls, reg r31:V, reg length1:cls, reg r32:V, reg c3:L, reg paste1:cls, reg _fmt_bad_all2:cls, reg bad2:*, reg bad3:V, reg p4:p(V +), reg r34:V, reg p5:p(V +), reg r36:V, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg x9:*, reg x10:V, reg attr3:cls, reg r42:V, reg length2:cls, reg r43:V, reg c4:L, reg paste2:cls, reg paste3:cls, reg strwrap:cls, reg paste4:cls, reg sort:cls, reg met:*, reg met1:V, reg p6:p(V +), reg r45:V, reg p7:p(V +), reg r47:V, reg p8:p(V +), reg r49:V, reg p9:p(V +), reg r51:V, reg p10:p(V +), reg r53:V, reg r54:V, reg c5:cls, reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg s2:*, reg s3:V, reg length3:cls, reg r59:V, reg c6:L, reg paste5:cls, reg s4:*, reg s5:V, reg p11:p(V +), reg r61:V, reg character:cls, reg r62:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner1236783023;
    st `.fmt_args` = r;
    r1 = clos inner3708401697;
    st `.fmt_bad_one` = r1;
    r2 = clos inner2501545716;
    st `.fmt_bad_all` = r2;
    config_val_to_logical = ldf config_val_to_logical;
    check L19() else D0();
  D0():
    deopt 10 [];
  L19():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r3 = dyn Sys_getenv("_R_CHECK_S3_METHODS_SHOW_POSSIBLE_ISSUES_", "FALSE");
      return r3;
    };
    r5 = dyn config_val_to_logical(p);
    check L20() else D1();
  D1():
    deopt 12 [r5];
  L20():
    st show_possible_issues = r5;
    _fmt_bad_all = ldf `.fmt_bad_all`;
    check L21() else D2();
  D2():
    deopt 15 [];
  L21():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r7 = dyn _fmt_bad_all(p1);
    check L22() else D3();
  D3():
    deopt 17 [r7];
  L22():
    st s = r7;
    show_possible_issues = ld show_possible_issues;
    check L23() else D4();
  D4():
    deopt 19 [show_possible_issues];
  L23():
    show_possible_issues1 = force? show_possible_issues;
    checkMissing(show_possible_issues1);
    c = `as.logical`(show_possible_issues1);
    if c then L24() else L0();
  L0():
    goto L16();
  L16():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L70() else L71();
  L24():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r9):
    st s = r9;
    goto L16();
  L17(r58):
    c6 = `as.logical`(r58);
    if c6 then L74() else L18();
  L25():
    s = ld s;
    check L27() else D5();
  L26():
    r8 = dyn base(<sym s>, <lang if(length(`<-`(bad, c(attr(x, "bad_methods_not_registered_with_generic_in_code"), attr(x, "bad_methods_not_registered_with_generic_not_in_code")))), paste0("Mismatches for apparent methods not registered:\n", .fmt_bad_all(bad)))>, <lang if(length(`<-`(bad, attr(x, "bad_methods_registered_for_non_generic"))), paste0("Mismatches for methods registered for non-generic:\n", .fmt_bad_all(bad)))>, <lang if(length(`<-`(met, attr(x, "methods_not_registered_with_exported_generic"))), paste0("Apparent methods for exported generics not registered:\n", paste(strwrap(paste(sort(met), collapse=" "), exdent=2, indent=2), collapse="\n")))>);
    goto L1(r8);
  L70():
    s2 = ld s;
    check L72() else D25();
  L71():
    r57 = dyn base9(<sym s>);
    goto L17(r57);
  D5():
    deopt 23 [s];
  D25():
    deopt 100 [s2];
  L18():
    character = ldf character;
    check L78() else D29();
  L27():
    s1 = force? s;
    checkMissing(s1);
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L72():
    s3 = force? s2;
    checkMissing(s3);
    length3 = ldf length in base;
    r59 = dyn length3(s3);
    check L73() else D26();
  L74():
    paste5 = ldf paste;
    check L75() else D27();
  D26():
    deopt 103 [r59];
  D27():
    deopt 105 [];
  D29():
    deopt 111 [];
  L2(r11):
    c2 = `as.logical`(r11);
    if c2 then L42() else L6();
  L28():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L29():
    r10 = dyn base1(<lang `<-`(bad, c(attr(x, "bad_methods_not_registered_with_generic_in_code"), attr(x, "bad_methods_not_registered_with_generic_not_in_code")))>);
    goto L2(r10);
  L73():
    goto L17(r59);
  L75():
    p11 = prom<V +>{
      s4 = ld s;
      s5 = force? s4;
      checkMissing(s5);
      return s5;
    };
    r61 = dyn paste5[, collapse](p11, "\n\n");
    check L76() else D28();
  L78():
    r62 = dyn character();
    check L79() else D30();
  D28():
    deopt 109 [r61];
  D30():
    deopt 112 [r62];
  L3(r13):
    st bad = r13;
    length = ldf length in base;
    r21 = dyn length(r13);
    check L41() else D11();
  L6():
    goto L7(NULL);
  L7(r26):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L30():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L31():
    r12 = dyn base2(<lang attr(x, "bad_methods_not_registered_with_generic_in_code")>, <lang attr(x, "bad_methods_not_registered_with_generic_not_in_code")>);
    goto L3(r12);
  L42():
    paste0 = ldf paste0;
    check L43() else D12();
  L76():
    popenv;
    return r61;
  L79():
    popenv;
    return r62;
  D11():
    deopt 47 [r21];
  D12():
    deopt 49 [];
  L4(r15):
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L8(r28):
    c3 = `as.logical`(r28);
    if c3 then L53() else L10();
  L32():
    x3 = ld x;
    check L34() else D6();
  L33():
    r14 = dyn base3(<sym x>, "bad_methods_not_registered_with_generic_in_code");
    goto L4(r14);
  L41():
    goto L2(r21);
  L43():
    p3 = prom<V +>{
      _fmt_bad_all1 = ldf `.fmt_bad_all`;
      p2 = prom<V +>{
        bad = ld bad;
        bad1 = force? bad;
        checkMissing(bad1);
        return bad1;
      };
      r23 = dyn _fmt_bad_all1(p2);
      return r23;
    };
    r25 = dyn paste0("Mismatches for apparent methods not registered:\n", p3);
    check L44() else D13();
  L46():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L47():
    r27 = dyn base5(<lang `<-`(bad, attr(x, "bad_methods_registered_for_non_generic"))>);
    goto L8(r27);
  D6():
    deopt 31 [x3];
  D13():
    deopt 52 [r25];
  L5(r18):
    c1 = ldf c in base;
    r20 = dyn c1(r15, r18);
    check L40() else D10();
  L9(r30):
    st bad = r30;
    length1 = ldf length in base;
    r32 = dyn length1(r30);
    check L52() else D16();
  L10():
    goto L11(NULL);
  L11(r37):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L57() else L58();
  L34():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r16 = dyn attr(x4, "bad_methods_not_registered_with_generic_in_code");
    check L35() else D7();
  L36():
    x5 = ld x;
    check L38() else D8();
  L37():
    r17 = dyn base4(<sym x>, "bad_methods_not_registered_with_generic_not_in_code");
    goto L5(r17);
  L44():
    goto L7(r25);
  L48():
    x7 = ld x;
    check L50() else D14();
  L49():
    r29 = dyn base6(<sym x>, "bad_methods_registered_for_non_generic");
    goto L9(r29);
  L53():
    paste1 = ldf paste0;
    check L54() else D17();
  D7():
    deopt 35 [r16];
  D8():
    deopt 38 [x5];
  D10():
    deopt 44 [r20];
  D14():
    deopt 59 [x7];
  D16():
    deopt 66 [r32];
  D17():
    deopt 68 [];
  L12(r39):
    c4 = `as.logical`(r39);
    if c4 then L64() else L14();
  L35():
    goto L4(r16);
  L38():
    x6 = force? x5;
    checkMissing(x6);
    attr1 = ldf attr in base;
    r19 = dyn attr1(x6, "bad_methods_not_registered_with_generic_not_in_code");
    check L39() else D9();
  L40():
    goto L3(r20);
  L50():
    x8 = force? x7;
    checkMissing(x8);
    attr2 = ldf attr in base;
    r31 = dyn attr2(x8, "bad_methods_registered_for_non_generic");
    check L51() else D15();
  L52():
    goto L8(r32);
  L54():
    p5 = prom<V +>{
      _fmt_bad_all2 = ldf `.fmt_bad_all`;
      p4 = prom<V +>{
        bad2 = ld bad;
        bad3 = force? bad2;
        checkMissing(bad3);
        return bad3;
      };
      r34 = dyn _fmt_bad_all2(p4);
      return r34;
    };
    r36 = dyn paste1("Mismatches for methods registered for non-generic:\n", p5);
    check L55() else D18();
  L57():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L59() else L60();
  L58():
    r38 = dyn base7(<lang `<-`(met, attr(x, "methods_not_registered_with_exported_generic"))>);
    goto L12(r38);
  D9():
    deopt 42 [r19];
  D15():
    deopt 63 [r31];
  D18():
    deopt 71 [r36];
  L13(r41):
    st met = r41;
    length2 = ldf length in base;
    r43 = dyn length2(r41);
    check L63() else D21();
  L14():
    goto L15(NULL);
  L15(r54):
    c5 = ldf c in base;
    r55 = dyn c5(s1, r26, r37, r54);
    check L68() else D24();
  L39():
    goto L5(r19);
  L51():
    goto L9(r31);
  L55():
    goto L11(r36);
  L59():
    x9 = ld x;
    check L61() else D19();
  L60():
    r40 = dyn base8(<sym x>, "methods_not_registered_with_exported_generic");
    goto L13(r40);
  L64():
    paste2 = ldf paste0;
    check L65() else D22();
  D19():
    deopt 78 [x9];
  D21():
    deopt 85 [r43];
  D22():
    deopt 87 [];
  D24():
    deopt 94 [r55];
  L61():
    x10 = force? x9;
    checkMissing(x10);
    attr3 = ldf attr in base;
    r42 = dyn attr3(x10, "methods_not_registered_with_exported_generic");
    check L62() else D20();
  L63():
    goto L12(r43);
  L65():
    p10 = prom<V +>{
      paste3 = ldf paste;
      p9 = prom<V +>{
        strwrap = ldf strwrap;
        p8 = prom<V +>{
          paste4 = ldf paste;
          p7 = prom<V +>{
            sort = ldf sort;
            p6 = prom<V +>{
              met = ld met;
              met1 = force? met;
              checkMissing(met1);
              return met1;
            };
            r45 = dyn sort(p6);
            return r45;
          };
          r47 = dyn paste4[, collapse](p7, " ");
          return r47;
        };
        r49 = dyn strwrap[, exdent, indent](p8, 2, 2);
        return r49;
      };
      r51 = dyn paste3[, collapse](p9, "\n");
      return r51;
    };
    r53 = dyn paste2("Apparent methods for exported generics not registered:\n", p10);
    check L66() else D23();
  L68():
    goto L1(r55);
  D20():
    deopt 82 [r42];
  D23():
    deopt 90 [r53];
  L62():
    goto L13(r42);
  L66():
    goto L15(r53);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg paste0:cls, reg paste1:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st s = s;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      paste1 = ldf paste;
      p = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r1 = dyn paste1[, collapse](p, ", ");
      return r1;
    };
    r3 = dyn paste0("function(", p1, ")");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paste1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg names:cls, reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg p:p(V +), reg r9:V, reg strwrap:cls, reg _fmt_args:cls, reg e3:*, reg e4:V, reg c1:L, reg e6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg paste2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg e7:*, reg e8:V, reg names1:cls, reg r17:V, reg c2:L, reg r19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg strwrap1:cls, reg _fmt_args1:cls, reg e9:*, reg e10:V, reg c3:L, reg e12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r23:V, reg p4:p(V +), reg r25:V, reg p5:p(V +), reg r27:V, reg c4:cls, reg r28:V, reg p6:p(V +), reg r30:V |
    mkenv;
    st e = e;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p6 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      paste1 = ldf paste0;
      p = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L2() else L3();
      L0(r3):
        c = `is.object`(r3);
        if c then L4() else L5(r3);
      L2():
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        names = ldf names in base;
        r4 = dyn names(e2);
        goto L0(r4);
      L3():
        r2 = dyn base1(<sym e>);
        goto L0(r2);
      L1(dx1):
        return dx1;
      L4():
        dr = tryDispatchBuiltin.1("[", r3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(r6):
        __ = ldf `[` in base;
        r7 = dyn __(r6, 1);
        goto L1(r7);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r9 = dyn paste1(p, ":");
      strwrap = ldf strwrap;
      p2 = prom<V +>{
        _fmt_args = ldf `.fmt_args`;
        p1 = prom<V +>{
          e3 = ld e;
          e4 = force? e3;
          checkMissing(e4);
          c1 = `is.object`(e4);
          if c1 then L1() else L2(e4);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[[", e4);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(e6):
          __1 = ldf `[[` in base;
          r10 = dyn __1(e6, 1);
          goto L0(r10);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r12 = dyn _fmt_args(p1);
        return r12;
      };
      r14 = dyn strwrap[, indent, exdent](p2, 2, 11);
      paste2 = ldf paste0;
      p3 = prom<V +>{
        sym2 = ldf names;
        base2 = ldf names in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L2() else L3();
      L0(r16):
        c2 = `is.object`(r16);
        if c2 then L4() else L5(r16);
      L2():
        e7 = ld e;
        e8 = force? e7;
        checkMissing(e8);
        names1 = ldf names in base;
        r17 = dyn names1(e8);
        goto L0(r17);
      L3():
        r15 = dyn base2(<sym e>);
        goto L0(r15);
      L1(dx5):
        return dx5;
      L4():
        dr4 = tryDispatchBuiltin.1("[", r16);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L6() else L5(dr4);
      L5(r19):
        __2 = ldf `[` in base;
        r20 = dyn __2(r19, 2);
        goto L1(r20);
      L6():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx4);
      };
      r22 = dyn paste2(p3, ":");
      strwrap1 = ldf strwrap;
      p5 = prom<V +>{
        _fmt_args1 = ldf `.fmt_args`;
        p4 = prom<V +>{
          e9 = ld e;
          e10 = force? e9;
          checkMissing(e10);
          c3 = `is.object`(e10);
          if c3 then L1() else L2(e10);
        L0(dx7):
          return dx7;
        L1():
          dr6 = tryDispatchBuiltin.1("[[", e10);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L3() else L2(dr6);
        L2(e12):
          __3 = ldf `[[` in base;
          r23 = dyn __3(e12, 2);
          goto L0(r23);
        L3():
          dx6 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx6);
        };
        r25 = dyn _fmt_args1(p4);
        return r25;
      };
      r27 = dyn strwrap1[, indent, exdent](p5, 2, 11);
      c4 = ldf c in base;
      r28 = dyn c4(r9, r14, r22, r27);
      goto L0(r28);
    L2():
      r = dyn base(<lang paste0(`[`(names(e), 1), ":")>, <lang strwrap(.fmt_args(`[[`(e, 1)), indent=2, exdent=11)>, <lang paste0(`[`(names(e), 2), ":")>, <lang strwrap(.fmt_args(`[[`(e, 2)), indent=2, exdent=11)>);
      goto L0(r);
    };
    r30 = dyn paste[, collapse](p6, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r30];
  L1():
    popenv;
    return r30;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg paste:cls, reg vapply:cls, reg x3:*, reg x4:V, reg p:p(V +), reg _fmt_bad_one:*, reg _fmt_bad_one1:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    paste = ldf paste;
    check L12() else D4();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L6() else D1();
  L7():
    character = ldf character;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L6():
    goto L0(r2);
  L8():
    r4 = dyn character();
    check L9() else D3();
  L12():
    p2 = prom<V +>{
      vapply = ldf vapply;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p1 = prom<V +>{
        _fmt_bad_one = ld `.fmt_bad_one`;
        _fmt_bad_one1 = force? _fmt_bad_one;
        checkMissing(_fmt_bad_one1);
        return _fmt_bad_one1;
      };
      r9 = dyn vapply(p, p1, "");
      return r9;
    };
    r11 = dyn paste[, collapse](p2, "\n\n");
    check L13() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 18 [r11];
  L9():
    popenv;
    return r4;
  L13():
    popenv;
    return r11;
  }
}