fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3672943467;
    st `.standardGenericDots` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3672943467(name) {
  (reg name:*) -+> V { var name:*, reg sys_frame:cls, reg sys_parent:cls, reg r:V, reg p:p(V +), reg r2:V, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg quote:cls, reg r5:V, reg p1:p(V +), reg env:*, reg env1:V, reg p2:p(V +), reg r8:V, reg unique:cls, reg unlist:cls, reg lapply:cls, reg dots:*, reg dots1:V, reg p3:p(V +), reg ___:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg ___1:cls, reg r17:V, reg r18:cls, reg classes:*, reg classes1:V, reg p7:p(V +), reg _MTable:*, reg _MTable1:V, reg p8:p(V +), reg _AllMTable:*, reg _AllMTable1:V, reg p9:p(V +), reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg method:*, reg method1:V, reg c:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg deparse:cls, reg sys_call:cls, reg sys_parent1:cls, reg r25:V, reg p10:p(V +), reg r27:V, reg p11:p(V +), reg r29:V, reg p12:p(V +), reg r31:V, reg p13:p(V +), reg r33:V, reg match_call:cls, reg sys_function:cls, reg sys_parent2:cls, reg r35:V, reg p14:p(V +), reg r37:V, reg p15:p(V +), reg sys_call1:cls, reg sys_parent3:cls, reg r39:V, reg p16:p(V +), reg r41:V, reg p17:p(V +), reg parent_frame:cls, reg r43:V, reg p18:p(V +), reg r45:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r46:V, reg r47:V, reg mc:*, reg mc1:V, reg names:cls, reg r48:V, reg c2:L, reg r50:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r51:V, reg lapply1:cls, reg args:*, reg args1:V, reg p19:p(V +), reg as_name:*, reg as_name1:V, reg p20:p(V +), reg r54:V, reg l:*, reg c3:L, reg r56:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg args2:*, reg args3:V, reg ___2:cls, reg r59:V, reg l3:*, reg names1:cls, reg r60:V, reg c4:L, reg r63:S, reg l5:*, reg r64:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r66:S, reg l7:*, reg dx5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r73:V, reg r74:S, reg l10:*, reg r75:V, reg r76:S, reg r77:V, reg mc2:*, reg mc3:V, reg names2:cls, reg r78:V, reg r79:V, reg ___3:cls, reg r80:V, reg names__:cls, reg r81:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r82:V, reg r83:V, reg quote1:cls, reg r84:V, reg l11:*, reg c5:L, reg r86:V, reg l13:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r89:V, reg assign:cls, reg name1:*, reg name2:V, reg p21:p(V +), reg method2:*, reg method3:V, reg p22:p(V +), reg env2:*, reg env3:V, reg p23:p(V +), reg r93:V, reg eval1:cls, reg mc4:*, reg mc5:V, reg p24:p(V +), reg env4:*, reg env5:V, reg p25:p(V +), reg r96:V |
    mkenv;
    st name = name;
    sys_frame = ldf `sys.frame`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      sys_parent = ldf `sys.parent`;
      r = dyn sys_parent();
      return r;
    };
    r2 = dyn sys_frame(p);
    check L11() else D1();
  D1():
    deopt 3 [r2];
  L11():
    st env = r2;
    eval = ldf eval;
    check L12() else D2();
  D2():
    deopt 6 [];
  L12():
    p1 = prom<V +>{
      sym = ldf quote;
      base = ldf quote in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      quote = ldf quote in base;
      r5 = dyn quote(<lang list(...)>);
      goto L0(r5);
    L2():
      r3 = dyn base(<lang list(...)>);
      goto L0(r3);
    };
    p2 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r8 = dyn eval(p1, p2);
    check L13() else D3();
  D3():
    deopt 9 [r8];
  L13():
    st dots = r8;
    unique = ldf unique;
    check L14() else D4();
  D4():
    deopt 12 [];
  L14():
    p6 = prom<V +>{
      unlist = ldf unlist;
      p5 = prom<V +>{
        lapply = ldf lapply;
        p3 = prom<V +>{
          dots = ld dots;
          dots1 = force? dots;
          checkMissing(dots1);
          return dots1;
        };
        p4 = prom<V +>{
          ___ = ldf `:::`;
          r10 = dyn ___("methods", ".class1");
          return r10;
        };
        r12 = dyn lapply(p3, p4);
        return r12;
      };
      r14 = dyn unlist(p5);
      return r14;
    };
    r16 = dyn unique(p6);
    check L15() else D5();
  D5():
    deopt 14 [r16];
  L15():
    st classes = r16;
    ___1 = ldf `:::`;
    check L16() else D6();
  D6():
    deopt 17 [];
  L16():
    r17 = dyn ___1("methods", ".selectDotsMethod");
    check L17() else D7();
  D7():
    deopt 20 [r17];
  L17():
    checkFun.0(r17);
    r18 = r17 as cls;
    p7 = prom<V +>{
      classes = ld classes;
      classes1 = force? classes;
      checkMissing(classes1);
      return classes1;
    };
    p8 = prom<V +>{
      _MTable = ld `.MTable`;
      _MTable1 = force? _MTable;
      checkMissing(_MTable1);
      return _MTable1;
    };
    p9 = prom<V +>{
      _AllMTable = ld `.AllMTable`;
      _AllMTable1 = force? _AllMTable;
      checkMissing(_AllMTable1);
      return _AllMTable1;
    };
    r22 = dyn r18(p7, p8, p9);
    check L18() else D8();
  D8():
    deopt 25 [r22];
  L18():
    st method = r22;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L0(r24):
    c1 = `as.logical`(r24);
    if c1 then L22() else L1();
  L19():
    method = ld method;
    check L21() else D9();
  L20():
    r23 = dyn base1(<sym method>);
    goto L0(r23);
  D9():
    deopt 28 [method];
  L1():
    goto L2();
  L2():
    match_call = ldf `match.call`;
    check L26() else D12();
  L21():
    method1 = force? method;
    checkMissing(method1);
    c = `==`(method1, NULL);
    goto L0(c);
  L22():
    stop = ldf stop;
    check L23() else D10();
  D10():
    deopt 32 [];
  D12():
    deopt 40 [];
  L23():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        deparse = ldf deparse;
        p11 = prom<V +>{
          sys_call = ldf `sys.call`;
          p10 = prom<V +>{
            sys_parent1 = ldf `sys.parent`;
            r25 = dyn sys_parent1();
            return r25;
          };
          r27 = dyn sys_call(p10);
          return r27;
        };
        r29 = dyn deparse[, nlines](p11, 1.0);
        return r29;
      };
      r31 = dyn gettextf("no method or default matching the \"...\" arguments in %s", p12);
      return r31;
    };
    r33 = dyn stop[, domain](p13, NA_LGL);
    check L24() else D11();
  L26():
    p15 = prom<V +>{
      sys_function = ldf `sys.function`;
      p14 = prom<V +>{
        sys_parent2 = ldf `sys.parent`;
        r35 = dyn sys_parent2();
        return r35;
      };
      r37 = dyn sys_function(p14);
      return r37;
    };
    p17 = prom<V +>{
      sys_call1 = ldf `sys.call`;
      p16 = prom<V +>{
        sys_parent3 = ldf `sys.parent`;
        r39 = dyn sys_parent3();
        return r39;
      };
      r41 = dyn sys_call1(p16);
      return r41;
    };
    p18 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r43 = dyn parent_frame(2.0);
      return r43;
    };
    r45 = dyn match_call[, , `expand.dots`, envir](p15, p17, FALSE, p18);
    check L27() else D13();
  D11():
    deopt 36 [r33];
  D13():
    deopt 47 [r45];
  L24():
    goto L2();
  L27():
    st mc = r45;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L3(r47):
    c2 = `is.object`(r47);
    if c2 then L32() else L33(r47);
  L28():
    mc = ld mc;
    check L30() else D14();
  L29():
    r46 = dyn base2(<sym mc>);
    goto L3(r46);
  D14():
    deopt 51 [mc];
  L4(dx1):
    st args = dx1;
    lapply1 = ldf lapply;
    check L35() else D16();
  L30():
    mc1 = force? mc;
    checkMissing(mc1);
    names = ldf names in base;
    r48 = dyn names(mc1);
    check L31() else D15();
  L32():
    dr = tryDispatchBuiltin.1("[", r47);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(r50):
    __ = ldf `[` in base;
    r51 = dyn __(r50, -1);
    goto L4(r51);
  D15():
    deopt 54 [r48];
  D16():
    deopt 60 [];
  L31():
    goto L3(r48);
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L35():
    p19 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p20 = prom<V +>{
      as_name = ld `as.name`;
      as_name1 = force? as_name;
      checkMissing(as_name1);
      return as_name1;
    };
    r54 = dyn lapply1(p19, p20);
    check L36() else D17();
  D17():
    deopt 63 [r54];
  L36():
    l = ld mc;
    c3 = `is.object`(l);
    if c3 then L37() else L38(r54, l);
  L5(dx3):
    st mc = dx3;
    l3 = ld mc;
    names1 = ldf names;
    check L41() else D19();
  L37():
    dr2 = tryDispatchBuiltin.0("[<-", l, r54);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(r54, dr2);
  L38(r56, l2):
    args2 = ld args;
    check L40() else D18();
  D18():
    deopt 65 [r56, l2, r54, args2];
  D19():
    deopt 72 ["", l3, ""];
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L40():
    args3 = force? args2;
    ___2 = ldf `[<-` in base;
    r59 = dyn ___2(l2, r54, args3);
    goto L5(r59);
  L41():
    r60 = dyn names1("", NULL);
    check L42() else D20();
  D20():
    deopt 74 ["", l3, "", r60];
  L42():
    c4 = `is.object`(r60);
    if c4 then L43() else L44("", l3, r60);
  L6(r66, l7, dx5):
    names__ = ldf `names<-`;
    check L50() else D23();
  L43():
    dr4 = tryDispatchBuiltin.0("[<-", r60, "");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44("", l3, dr4);
  L44(r63, l5, r64):
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  D23():
    deopt 85 [r66, l7, dx5];
  L7(r74, l10, r75, r76, r77):
    r79 = `==`(r77, "...");
    ___3 = ldf `[<-` in base;
    r80 = dyn ___3(r75, r76, r79);
    goto L6(r74, l10, r80);
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6("", l3, dx4);
  L46():
    mc2 = ld mc;
    check L48() else D21();
  L47():
    r73 = dyn base3(<sym mc>);
    goto L7(r63, l5, r64, "", r73);
  L50():
    r81 = dyn names__(l7, NULL, dx5);
    check L51() else D24();
  D21():
    deopt 78 [r63, l5, r64, "", mc2];
  D24():
    deopt 87 [r66, r81];
  L48():
    mc3 = force? mc2;
    checkMissing(mc3);
    names2 = ldf names in base;
    r78 = dyn names2(mc3);
    check L49() else D22();
  L51():
    st mc = r81;
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D22():
    deopt 81 [r63, l5, r64, "", r78];
  L8(r83):
    l11 = ld mc;
    c5 = `is.object`(l11);
    if c5 then L54() else L55(r83, l11);
  L49():
    goto L7(r63, l5, r64, "", r78);
  L52():
    quote1 = ldf quote in base;
    r84 = dyn quote1(<sym .dotsMethod>);
    goto L8(r84);
  L53():
    r82 = dyn base4(<sym .dotsMethod>);
    goto L8(r82);
  L9(dx7):
    st mc = dx7;
    assign = ldf assign;
    check L57() else D25();
  L54():
    dr6 = tryDispatchBuiltin.0("[[<-", l11, r83);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(r83, dr6);
  L55(r86, l13):
    ____ = ldf `[[<-` in base;
    r89 = dyn ____(l13, r83, 1);
    goto L9(r89);
  D25():
    deopt 98 [];
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L57():
    p21 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p22 = prom<V +>{
      method2 = ld method;
      method3 = force? method2;
      checkMissing(method3);
      return method3;
    };
    p23 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r93 = dyn assign(p21, p22, p23);
    check L58() else D26();
  D26():
    deopt 102 [r93];
  L58():
    eval1 = ldf eval;
    check L59() else D27();
  D27():
    deopt 104 [];
  L59():
    p24 = prom<V +>{
      mc4 = ld mc;
      mc5 = force? mc4;
      checkMissing(mc5);
      return mc5;
    };
    p25 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r96 = dyn eval1(p24, p25);
    check L60() else D28();
  D28():
    deopt 107 [r96];
  L60():
    popenv;
    return r96;
  }
}