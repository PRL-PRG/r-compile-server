fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3195054665;
    st getGenerics = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3195054665(where, searchForm) {
  (reg where:*, reg searchForm:*) -+> V { var where:*, var searchForm:*, reg searchForm_isMissing:L, reg searchForm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg as_list:cls, reg _genericTable:*, reg _genericTable1:V, reg p:p(V +), reg r4:V, reg mapply:cls, reg r5:cls, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg fdefs:*, reg fdefs1:V, reg names:cls, reg r9:V, reg p2:p(V +), reg fdefs2:*, reg fdefs3:V, reg p3:p(V +), reg r12:V, reg lapply:cls, reg fdefs4:*, reg fdefs5:V, reg p4:p(V +), reg _packageForGeneric:*, reg _packageForGeneric1:V, reg p5:p(V +), reg r15:V, reg new:cls, reg unlist:cls, reg fnames:*, reg fnames1:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg unlist1:cls, reg packages:*, reg packages1:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg where1:*, reg where2:V, reg is_environment:cls, reg r25:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg where3:*, reg where4:V, reg list:cls, reg r28:V, reg unlist2:cls, reg lapply1:cls, reg where5:*, reg where6:V, reg p10:p(V +), reg objects:*, reg objects1:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg r34:V, reg metaNameUndo:cls, reg unique:cls, reg these:*, reg these1:V, reg p13:p(V +), reg r36:V, reg p14:p(V +), reg searchForm1:*, reg searchForm2:V, reg p15:p(V +), reg r39:V |
    mkenv;
    st where = where;
    searchForm_isMissing = missing.0(searchForm);
    if searchForm_isMissing then L0(FALSE) else L0(searchForm);
  L0(searchForm_orDefault):
    st searchForm = searchForm_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    c = `as.logical`(r1);
    if c then L9() else L2();
  L7():
    missing = ldf missing in base;
    r2 = dyn missing(<sym where>);
    goto L1(r2);
  L8():
    r = dyn base(<sym where>);
    goto L1(r);
  L2():
    sym2 = ldf `is.environment`;
    base2 = ldf `is.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L9():
    as_list = ldf `as.list`;
    check L10() else D0();
  D0():
    deopt 4 [];
  L3(r24):
    c1 = `as.logical`(r24);
    if c1 then L23() else L4();
  L10():
    p = prom<V +>{
      _genericTable = ld `.genericTable`;
      _genericTable1 = force? _genericTable;
      checkMissing(_genericTable1);
      return _genericTable1;
    };
    r4 = dyn as_list[, `all.names`, sorted](p, TRUE, TRUE);
    check L11() else D1();
  L19():
    where1 = ld where;
    check L21() else D8();
  L20():
    r23 = dyn base2(<sym where>);
    goto L3(r23);
  D1():
    deopt 10 [r4];
  D8():
    deopt 36 [where1];
  L4():
    goto L6();
  L6():
    unlist2 = ldf unlist;
    check L29() else D12();
  L11():
    st fdefs = r4;
    mapply = ldf mapply;
    check L12() else D2();
  L21():
    where2 = force? where1;
    checkMissing(where2);
    is_environment = ldf `is.environment` in base;
    r25 = dyn is_environment(where2);
    check L22() else D9();
  L23():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  D2():
    deopt 13 [];
  D9():
    deopt 39 [r25];
  D12():
    deopt 50 [];
  L5(r27):
    st where = r27;
    goto L6();
  L12():
    p1 = prom<V +>{
      r5 = clos inner263898016;
      return r5;
    };
    p2 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      fdefs = ld fdefs;
      fdefs1 = force? fdefs;
      checkMissing(fdefs1);
      names = ldf names in base;
      r9 = dyn names(fdefs1);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym fdefs>);
      goto L0(r7);
    };
    p3 = prom<V +>{
      fdefs2 = ld fdefs;
      fdefs3 = force? fdefs2;
      checkMissing(fdefs3);
      return fdefs3;
    };
    r12 = dyn mapply[, , , SIMPLIFY](p1, p2, p3, FALSE);
    check L13() else D3();
  L22():
    goto L3(r25);
  L24():
    where3 = ld where;
    check L26() else D10();
  L25():
    r26 = dyn base3(<sym where>);
    goto L5(r26);
  L29():
    p12 = prom<V +>{
      lapply1 = ldf lapply;
      p10 = prom<V +>{
        where5 = ld where;
        where6 = force? where5;
        checkMissing(where6);
        return where6;
      };
      p11 = prom<V +>{
        objects = ld objects;
        objects1 = force? objects;
        checkMissing(objects1);
        return objects1;
      };
      r32 = dyn lapply1[, , `all.names`](p10, p11, TRUE);
      return r32;
    };
    r34 = dyn unlist2[, `use.names`](p12, FALSE);
    check L30() else D13();
  D3():
    deopt 19 [r12];
  D10():
    deopt 42 [where3];
  D13():
    deopt 54 [r34];
  L13():
    st fnames = r12;
    lapply = ldf lapply;
    check L14() else D4();
  L26():
    where4 = force? where3;
    checkMissing(where4);
    list = ldf list in base;
    r28 = dyn list(where4);
    check L27() else D11();
  L30():
    st these = r34;
    metaNameUndo = ldf metaNameUndo;
    check L31() else D14();
  D4():
    deopt 22 [];
  D11():
    deopt 45 [r28];
  D14():
    deopt 57 [];
  L14():
    p4 = prom<V +>{
      fdefs4 = ld fdefs;
      fdefs5 = force? fdefs4;
      checkMissing(fdefs5);
      return fdefs5;
    };
    p5 = prom<V +>{
      _packageForGeneric = ld `.packageForGeneric`;
      _packageForGeneric1 = force? _packageForGeneric;
      checkMissing(_packageForGeneric1);
      return _packageForGeneric1;
    };
    r15 = dyn lapply(p4, p5);
    check L15() else D5();
  L27():
    goto L5(r28);
  L31():
    p14 = prom<V +>{
      unique = ldf unique;
      p13 = prom<V +>{
        these = ld these;
        these1 = force? these;
        checkMissing(these1);
        return these1;
      };
      r36 = dyn unique(p13);
      return r36;
    };
    p15 = prom<V +>{
      searchForm1 = ld searchForm;
      searchForm2 = force? searchForm1;
      checkMissing(searchForm2);
      return searchForm2;
    };
    r39 = dyn metaNameUndo[, prefix, searchForm](p14, "T", p15);
    check L32() else D15();
  D5():
    deopt 25 [r15];
  D15():
    deopt 63 [r39];
  L15():
    st packages = r15;
    new = ldf new;
    check L16() else D6();
  L32():
    popenv;
    return r39;
  D6():
    deopt 28 [];
  L16():
    p7 = prom<V +>{
      unlist = ldf unlist;
      p6 = prom<V +>{
        fnames = ld fnames;
        fnames1 = force? fnames;
        checkMissing(fnames1);
        return fnames1;
      };
      r17 = dyn unlist(p6);
      return r17;
    };
    p9 = prom<V +>{
      unlist1 = ldf unlist;
      p8 = prom<V +>{
        packages = ld packages;
        packages1 = force? packages;
        checkMissing(packages1);
        return packages1;
      };
      r20 = dyn unlist1(p8);
      return r20;
    };
    r22 = dyn new[, , package]("ObjectsWithPackage", p7, p9);
    check L17() else D7();
  D7():
    deopt 33 [r22];
  L17():
    popenv;
    return r22;
  }
}
fun inner263898016(nm, obj) {
  (reg nm:*, reg obj:*) -+> V { var nm:*, var obj:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg obj1:*, reg obj2:V, reg is_list:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg obj3:*, reg obj4:V, reg names:cls, reg r5:V, reg nm1:*, reg nm2:V |
    mkenv;
    st nm = nm;
    st obj = obj;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    obj1 = ld obj;
    check L5() else D0();
  L4():
    r = dyn base(<sym obj>);
    goto L0(r);
  D0():
    deopt 2 [obj1];
  L1():
    nm1 = ld nm;
    check L13() else D4();
  L5():
    obj2 = force? obj1;
    checkMissing(obj2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(obj2);
    check L6() else D1();
  L7():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 5 [r2];
  D4():
    deopt 12 [nm1];
  L2(r4):
    popenv;
    return r4;
  L6():
    goto L0(r2);
  L8():
    obj3 = ld obj;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym obj>);
    goto L2(r3);
  L13():
    nm2 = force? nm1;
    checkMissing(nm2);
    popenv;
    return nm2;
  D2():
    deopt 8 [obj3];
  L10():
    obj4 = force? obj3;
    checkMissing(obj4);
    names = ldf names in base;
    r5 = dyn names(obj4);
    check L11() else D3();
  D3():
    deopt 11 [r5];
  L11():
    goto L2(r5);
  }
}