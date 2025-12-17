fun main() {
  () -+> V { reg r:cls, reg search:cls, reg r1:V, reg library:cls, reg stats4:*, reg stats5:V, reg p:p(V +), reg r3:V, reg inheritedSlotNames:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg require:cls, reg r7:V, reg c:L, reg withAutoprint:cls, reg inheritedSlotNames1:cls, reg inheritedSlotNames2:cls, reg getClass:cls, reg r10:V, reg inheritedSlotNames3:cls, reg cl:*, reg cl1:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V |
    mkenv;
    r = clos inner1266124685;
    st inheritedSlotNames = r;
    search = ldf search;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn search();
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    st `.srch` = r1;
    library = ldf library;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p = prom<V +>{
      stats4 = ld stats4;
      stats5 = force? stats4;
      checkMissing(stats5);
      return stats5;
    };
    r3 = dyn library(p);
    check L5() else D3();
  D3():
    deopt 10 [r3];
  L5():
    inheritedSlotNames = ldf inheritedSlotNames;
    check L6() else D4();
  D4():
    deopt 12 [];
  L6():
    r4 = dyn inheritedSlotNames("mle");
    check L7() else D5();
  D5():
    deopt 14 [r4];
  L7():
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r6):
    c = `as.logical`(r6);
    if c then L12() else L1();
  L8():
    require = ldf require;
    check L10() else D6();
  L9():
    r5 = dyn base[, quietly]("Matrix", TRUE);
    goto L0(r5);
  D6():
    deopt 17 [];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L10():
    r7 = dyn require[, quietly]("Matrix", TRUE);
    check L11() else D7();
  L12():
    withAutoprint = ldf withAutoprint;
    check L13() else D8();
  D7():
    deopt 21 [r7];
  D8():
    deopt 23 [];
  L11():
    goto L0(r7);
  L13():
    p2 = prom<V +>{
      inheritedSlotNames1 = ldf inheritedSlotNames;
      dyn inheritedSlotNames1("Matrix");
      inheritedSlotNames2 = ldf inheritedSlotNames;
      dyn inheritedSlotNames2("sparseMatrix");
      getClass = ldf getClass;
      r10 = dyn getClass("dgCMatrix");
      st cl = r10;
      inheritedSlotNames3 = ldf inheritedSlotNames;
      p1 = prom<V +>{
        cl = ld cl;
        cl1 = force? cl;
        checkMissing(cl1);
        return cl1;
      };
      r12 = dyn inheritedSlotNames3(p1);
      return r12;
    };
    r14 = dyn withAutoprint(p2);
    check L14() else D9();
  D9():
    deopt 25 [r14];
  L14():
    popenv;
    return r14;
  }
}
fun inner1266124685(Class, where) {
  (reg Class:*, reg where:*) -+> V { var Class:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg isClassDef:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg r5:V, reg c:L, reg __:cls, reg r6:V, reg r7:V, reg isClass:cls, reg Class3:*, reg Class4:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r10:V, reg c1:L, reg __1:cls, reg r11:V, reg _selectSuperClasses:cls, reg ext:*, reg ext1:V, reg p5:p(V +), reg r13:V, reg lapply:cls, reg supcl:*, reg supcl1:V, reg p6:p(V +), reg r15:cls, reg p7:p(V +), reg r17:V, reg unique:cls, reg unlist:cls, reg lapply1:cls, reg supdefs:*, reg supdefs1:V, reg p8:p(V +), reg slotNames:*, reg slotNames1:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V, reg p11:p(V +), reg r24:V |
    mkenv;
    st Class = Class;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    isClassDef = ldf isClassDef;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p2 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r5 = dyn isClassDef(p2);
    check L6() else D1();
  D1():
    deopt 3 [r5];
  L6():
    c = `as.logical`(r5);
    if c then L7() else L2();
  L2():
    isClass = ldf isClass;
    check L9() else D2();
  L3(r7):
    st ext = r7;
    _selectSuperClasses = ldf `.selectSuperClasses`;
    check L13() else D4();
  L7():
    __ = ldf `@` in base;
    r6 = dyn __(<sym Class>, <sym contains>);
    goto L3(r6);
  D2():
    deopt 7 [];
  D4():
    deopt 18 [];
  L9():
    p3 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r10 = dyn isClass[, where](p3, p4);
    check L10() else D3();
  L13():
    p5 = prom<V +>{
      ext = ld ext;
      ext1 = force? ext;
      checkMissing(ext1);
      return ext1;
    };
    r13 = dyn _selectSuperClasses[, namesOnly](p5, FALSE);
    check L14() else D5();
  D3():
    deopt 11 [r10];
  D5():
    deopt 22 [r13];
  L10():
    c1 = `as.logical`(r10);
    if c1 then L11() else L4();
  L14():
    st supcl = r13;
    lapply = ldf lapply;
    check L15() else D6();
  D6():
    deopt 25 [];
  L4():
    goto L3(NULL);
  L11():
    __1 = ldf `@` in base;
    r11 = dyn __1(<lang getClass(Class, where=where)>, <sym contains>);
    goto L3(r11);
  L15():
    p6 = prom<V +>{
      supcl = ld supcl;
      supcl1 = force? supcl;
      checkMissing(supcl1);
      return supcl1;
    };
    p7 = prom<V +>{
      r15 = clos inner1236783023;
      return r15;
    };
    r17 = dyn lapply(p6, p7);
    check L16() else D7();
  D7():
    deopt 28 [r17];
  L16():
    st supdefs = r17;
    unique = ldf unique;
    check L17() else D8();
  D8():
    deopt 31 [];
  L17():
    p11 = prom<V +>{
      unlist = ldf unlist;
      p10 = prom<V +>{
        lapply1 = ldf lapply;
        p8 = prom<V +>{
          supdefs = ld supdefs;
          supdefs1 = force? supdefs;
          checkMissing(supdefs1);
          return supdefs1;
        };
        p9 = prom<V +>{
          slotNames = ld slotNames;
          slotNames1 = force? slotNames;
          checkMissing(slotNames1);
          return slotNames1;
        };
        r20 = dyn lapply1(p8, p9);
        return r20;
      };
      r22 = dyn unlist[, `use.names`](p10, FALSE);
      return r22;
    };
    r24 = dyn unique(p11);
    check L18() else D9();
  D9():
    deopt 33 [r24];
  L18():
    popenv;
    return r24;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg getClassDef:cls, reg __:cls, reg r:V, reg p:p(V +), reg packageSlot:cls, reg s1:*, reg s2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st s = s;
    getClassDef = ldf getClassDef;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym s>, <sym superClass>);
      return r;
    };
    p2 = prom<V +>{
      packageSlot = ldf packageSlot;
      p1 = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r3 = dyn packageSlot(p1);
      return r3;
    };
    r5 = dyn getClassDef[, package](p, p2);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}