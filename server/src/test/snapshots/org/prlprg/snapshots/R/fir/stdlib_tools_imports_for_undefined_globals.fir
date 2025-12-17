fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1924480620;
    st imports_for_undefined_globals = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1924480620(txt, lst, selective) {
  (reg txt:*, reg lst:*, reg selective:*) -+> V { var txt:*, var lst:*, var selective:*, reg selective_isMissing:L, reg selective_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg scan:cls, reg character:cls, reg r4:V, reg p:p(V +), reg txt1:*, reg txt2:V, reg p1:p(V +), reg r7:V, reg sort:cls, reg unique:cls, reg lst1:*, reg lst2:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg lapply:cls, reg lst3:*, reg lst4:V, reg p4:p(V +), reg __:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg lengths:cls, reg nms:*, reg nms1:V, reg p6:p(V +), reg r18:V, reg r19:V, reg split:cls, reg lst5:*, reg lst6:V, reg c1:L, reg lst8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __1:cls, reg r20:V, reg p7:p(V +), reg substring:cls, reg unlist:cls, reg nms2:*, reg nms3:V, reg c2:L, reg nms5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r22:V, reg p8:p(V +), reg r24:V, reg p9:p(V +), reg r26:V, reg p10:p(V +), reg r28:V, reg selective1:*, reg selective2:V, reg c3:L, reg sprintf:cls, reg vapply:cls, reg Map:cls, reg c4:*, reg c5:V, reg p11:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r30:V, reg r31:V, reg imp:*, reg imp1:V, reg names:cls, reg r32:V, reg p12:p(V +), reg imp2:*, reg imp3:V, reg p13:p(V +), reg r35:V, reg p14:p(V +), reg r37:cls, reg p15:p(V +), reg r39:V, reg p16:p(V +), reg r41:V, reg sprintf1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg imp4:*, reg imp5:V, reg names1:cls, reg r44:V, reg p17:p(V +), reg r46:V |
    mkenv;
    st txt = txt;
    st lst = lst;
    selective_isMissing = missing.0(selective);
    if selective_isMissing then L0(TRUE) else L0(selective);
  L0(selective_orDefault):
    st selective = selective_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L2();
  L5():
    missing = ldf missing in base;
    r2 = dyn missing(<sym txt>);
    goto L1(r2);
  L6():
    r = dyn base(<sym txt>);
    goto L1(r);
  L2():
    goto L3();
  L3():
    sort = ldf sort;
    check L11() else D2();
  L7():
    scan = ldf scan;
    check L8() else D0();
  D0():
    deopt 5 [];
  D2():
    deopt 17 [];
  L8():
    p = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    p1 = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    r7 = dyn scan[what, text, quiet](p, p1, TRUE);
    check L9() else D1();
  L11():
    p3 = prom<V +>{
      unique = ldf unique;
      p2 = prom<V +>{
        lst1 = ld lst;
        lst2 = force? lst1;
        checkMissing(lst2);
        return lst2;
      };
      r10 = dyn unique(p2);
      return r10;
    };
    r12 = dyn sort(p3);
    check L12() else D3();
  D1():
    deopt 12 [r7];
  D3():
    deopt 19 [r12];
  L9():
    st lst = r7;
    goto L3();
  L12():
    st lst = r12;
    lapply = ldf lapply;
    check L13() else D4();
  D4():
    deopt 22 [];
  L13():
    p4 = prom<V +>{
      lst3 = ld lst;
      lst4 = force? lst3;
      checkMissing(lst4);
      return lst4;
    };
    p5 = prom<V +>{
      __ = ldf `::`;
      r14 = dyn __("utils", "find");
      return r14;
    };
    r16 = dyn lapply(p4, p5);
    check L14() else D5();
  D5():
    deopt 25 [r16];
  L14():
    st nms = r16;
    lengths = ldf lengths;
    check L15() else D6();
  D6():
    deopt 28 [];
  L15():
    p6 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r18 = dyn lengths(p6);
    check L16() else D7();
  D7():
    deopt 30 [r18];
  L16():
    r19 = `>`(r18, 0);
    st ind = r19;
    split = ldf split;
    check L17() else D8();
  D8():
    deopt 35 [];
  L17():
    p7 = prom<V +>{
      lst5 = ld lst;
      lst6 = force? lst5;
      checkMissing(lst6);
      c1 = `is.object`(lst6);
      if c1 then L1() else L2(lst6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lst6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lst8):
      ind = ld ind;
      ind1 = force? ind;
      __1 = ldf `[` in base;
      r20 = dyn __1(lst8, ind1);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p10 = prom<V +>{
      substring = ldf substring;
      p9 = prom<V +>{
        unlist = ldf unlist;
        p8 = prom<V +>{
          nms2 = ld nms;
          nms3 = force? nms2;
          checkMissing(nms3);
          c2 = `is.object`(nms3);
          if c2 then L1() else L2(nms3);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", nms3);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(nms5):
          ind2 = ld ind;
          ind3 = force? ind2;
          __2 = ldf `[` in base;
          r22 = dyn __2(nms5, ind3);
          goto L0(r22);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r24 = dyn unlist(p8);
        return r24;
      };
      r26 = dyn substring(p9, 9);
      return r26;
    };
    r28 = dyn split(p7, p10);
    check L18() else D9();
  D9():
    deopt 38 [r28];
  L18():
    st imp = r28;
    selective1 = ld selective;
    check L19() else D10();
  D10():
    deopt 40 [selective1];
  L19():
    selective2 = force? selective1;
    checkMissing(selective2);
    c3 = `as.logical`(selective2);
    if c3 then L20() else L4();
  L4():
    sprintf1 = ldf sprintf;
    check L24() else D13();
  L20():
    sprintf = ldf sprintf;
    check L21() else D11();
  D11():
    deopt 43 [];
  D13():
    deopt 48 [];
  L21():
    p16 = prom<V +>{
      vapply = ldf vapply;
      p14 = prom<V +>{
        Map = ldf Map;
        p11 = prom<V +>{
          c4 = ld c;
          c5 = force? c4;
          checkMissing(c5);
          return c5;
        };
        p12 = prom<V +>{
          sym1 = ldf names;
          base1 = ldf names in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r31):
          return r31;
        L1():
          imp = ld imp;
          imp1 = force? imp;
          checkMissing(imp1);
          names = ldf names in base;
          r32 = dyn names(imp1);
          goto L0(r32);
        L2():
          r30 = dyn base1(<sym imp>);
          goto L0(r30);
        };
        p13 = prom<V +>{
          imp2 = ld imp;
          imp3 = force? imp2;
          checkMissing(imp3);
          return imp3;
        };
        r35 = dyn Map(p11, p12, p13);
        return r35;
      };
      p15 = prom<V +>{
        r37 = clos inner3708401697;
        return r37;
      };
      r39 = dyn vapply(p14, p15, "");
      return r39;
    };
    r41 = dyn sprintf("importFrom(%s)", p16);
    check L22() else D12();
  L24():
    p17 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      imp4 = ld imp;
      imp5 = force? imp4;
      checkMissing(imp5);
      names1 = ldf names in base;
      r44 = dyn names1(imp5);
      goto L0(r44);
    L2():
      r42 = dyn base2(<sym imp>);
      goto L0(r42);
    };
    r46 = dyn sprintf1("import(\"%s\")", p17);
    check L25() else D14();
  D12():
    deopt 46 [r41];
  D14():
    deopt 51 [r46];
  L22():
    popenv;
    return r41;
  L25():
    popenv;
    return r46;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg paste0:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st e = e;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn paste0[, , , collapse]("\"", p, "\"", ", ");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}