fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2730135273;
    st resetGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2730135273(f, fdef, mlist, where, deflt) {
  (reg f:*, reg fdef:*, reg mlist:*, reg where:*, reg deflt:*) -+> V { var f:*, var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg getGeneric:cls, reg f1:*, reg f2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), var mlist:*, reg mlist_isMissing:L, reg mlist_orDefault:*, reg getMethodsForDispatch:cls, reg fdef1:*, reg fdef2:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r7:V, reg p5:p(V +), reg r9:V, reg p6:p(V +), var deflt:*, reg deflt_isMissing:L, reg deflt_orDefault:*, reg finalDefaultMethod:cls, reg mlist1:*, reg mlist2:V, reg p7:p(V +), reg r12:V, reg p8:p(V +), reg is:cls, reg fdef3:*, reg fdef4:V, reg p9:p(V +), reg r15:V, reg r16:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg f3:*, reg f4:V, reg p10:p(V +), reg r18:V, reg p11:p(V +), reg dQuote:cls, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg fdef5:*, reg fdef6:V, reg class:cls, reg r22:V, reg p12:p(V +), reg r24:V, reg p13:p(V +), reg r26:V, reg p14:p(V +), reg r28:V, reg _updateMethodsInTable:cls, reg fdef7:*, reg fdef8:V, reg p15:p(V +), reg r31:V, reg f5:*, reg f6:V |
    mkenv;
    st f = f;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L0() else L1(fdef);
  L0():
    p2 = prom<V +>{
      getGeneric = ldf getGeneric;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p1 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r2 = dyn getGeneric[, where](p, p1);
      return r2;
    };
    goto L1(p2);
  L1(fdef_orDefault):
    st fdef = fdef_orDefault;
    mlist_isMissing = missing.0(mlist);
    if mlist_isMissing then L2() else L3(mlist);
  L2():
    p4 = prom<V +>{
      getMethodsForDispatch = ldf getMethodsForDispatch;
      p3 = prom<V +>{
        fdef1 = ld fdef;
        fdef2 = force? fdef1;
        checkMissing(fdef2);
        return fdef2;
      };
      r5 = dyn getMethodsForDispatch(p3);
      return r5;
    };
    goto L3(p4);
  L3(mlist_orDefault):
    st mlist = mlist_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L4() else L5(where);
  L4():
    p6 = prom<V +>{
      topenv = ldf topenv;
      p5 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r7 = dyn parent_frame();
        return r7;
      };
      r9 = dyn topenv(p5);
      return r9;
    };
    goto L5(p6);
  L5(where_orDefault):
    st where = where_orDefault;
    deflt_isMissing = missing.0(deflt);
    if deflt_isMissing then L6() else L7(deflt);
  L6():
    p8 = prom<V +>{
      finalDefaultMethod = ldf finalDefaultMethod;
      p7 = prom<V +>{
        mlist1 = ld mlist;
        mlist2 = force? mlist1;
        checkMissing(mlist2);
        return mlist2;
      };
      r12 = dyn finalDefaultMethod(p7);
      return r12;
    };
    goto L7(p8);
  L7(deflt_orDefault):
    st deflt = deflt_orDefault;
    is = ldf is;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p9 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r15 = dyn is(p9, "genericFunction");
    check L11() else D1();
  D1():
    deopt 4 [r15];
  L11():
    r16 = `!`(r15);
    c = `as.logical`(r16);
    if c then L12() else L8();
  L8():
    goto L9();
  L9():
    _updateMethodsInTable = ldf `.updateMethodsInTable`;
    check L16() else D4();
  L12():
    stop = ldf stop;
    check L13() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 15 [];
  L13():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r18 = dyn sQuote(p10);
        return r18;
      };
      p13 = prom<V +>{
        dQuote = ldf dQuote;
        p12 = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r21):
          return r21;
        L1():
          fdef5 = ld fdef;
          fdef6 = force? fdef5;
          checkMissing(fdef6);
          class = ldf class in base;
          r22 = dyn class(fdef6);
          goto L0(r22);
        L2():
          r20 = dyn base(<sym fdef>);
          goto L0(r20);
        };
        r24 = dyn dQuote(p12);
        return r24;
      };
      r26 = dyn gettextf("error in updating S4 generic function %s; the function definition is not an S4 generic function (class %s)", p11, p13);
      return r26;
    };
    r28 = dyn stop[, domain](p14, NA_LGL);
    check L14() else D3();
  L16():
    p15 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    r31 = dyn _updateMethodsInTable[, attach](p15, "reset");
    check L17() else D5();
  D3():
    deopt 11 [r28];
  D5():
    deopt 19 [r31];
  L14():
    goto L9();
  L17():
    f5 = ld f;
    check L18() else D6();
  D6():
    deopt 20 [f5];
  L18():
    f6 = force? f5;
    checkMissing(f6);
    popenv;
    return f6;
  }
}