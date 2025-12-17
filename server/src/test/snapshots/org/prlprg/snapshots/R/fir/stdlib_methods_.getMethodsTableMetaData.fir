fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1528667670;
    st `.getMethodsTableMetaData` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1528667670(generic, where, optional) {
  (reg generic:*, reg where:*, reg optional:*) -+> V { var generic:*, var where:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, reg _TableMetaName:cls, reg __:cls, reg r:V, reg p:p(V +), reg __1:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg ____:cls, reg get0:cls, reg what:*, reg what1:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg optional1:*, reg optional2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg __2:cls, reg r9:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg sQuote1:cls, reg __3:cls, reg r13:V, reg p7:p(V +), reg r15:V, reg p8:p(V +), reg sQuote2:cls, reg getPackageName:cls, reg where3:*, reg where4:V, reg p9:p(V +), reg r18:V, reg p10:p(V +), reg r20:V, reg p11:p(V +), reg r22:V, reg p12:p(V +), reg r24:V, reg p13:p(V +), reg r26:V |
    mkenv;
    st generic = generic;
    st where = where;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L0(FALSE) else L0(optional);
  L0(optional_orDefault):
    st optional = optional_orDefault;
    _TableMetaName = ldf `.TableMetaName`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym generic>, <sym generic>);
      return r;
    };
    p1 = prom<V +>{
      __1 = ldf `@` in base;
      r2 = dyn __1(<sym generic>, <sym package>);
      return r2;
    };
    r4 = dyn _TableMetaName(p, p1);
    check L2() else D1();
  D1():
    deopt 4 [r4];
  L2():
    st what = r4;
    ____ = ldf `%||%`;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p4 = prom<V +>{
      get0 = ldf get0;
      p2 = prom<V +>{
        what = ld what;
        what1 = force? what;
        checkMissing(what1);
        return what1;
      };
      p3 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r7 = dyn get0[, envir, inherits](p2, p3, FALSE);
      return r7;
    };
    p13 = prom<V +>{
      optional1 = ld optional;
      optional2 = force? optional1;
      checkMissing(optional2);
      c = `as.logical`(optional2);
      if c then L1() else L0();
    L0():
      stop = ldf stop;
      p12 = prom<V +>{
        gettextf = ldf gettextf;
        p6 = prom<V +>{
          sQuote = ldf sQuote;
          p5 = prom<V +>{
            __2 = ldf `@` in base;
            r9 = dyn __2(<sym generic>, <sym generic>);
            return r9;
          };
          r11 = dyn sQuote(p5);
          return r11;
        };
        p8 = prom<V +>{
          sQuote1 = ldf sQuote;
          p7 = prom<V +>{
            __3 = ldf `@` in base;
            r13 = dyn __3(<sym generic>, <sym package>);
            return r13;
          };
          r15 = dyn sQuote1(p7);
          return r15;
        };
        p11 = prom<V +>{
          sQuote2 = ldf sQuote;
          p10 = prom<V +>{
            getPackageName = ldf getPackageName;
            p9 = prom<V +>{
              where3 = ld where;
              where4 = force? where3;
              checkMissing(where4);
              return where4;
            };
            r18 = dyn getPackageName(p9);
            return r18;
          };
          r20 = dyn sQuote2(p10);
          return r20;
        };
        r22 = dyn gettextf("no methods table for generic %s from package %s in package %s", p6, p8, p11);
        return r22;
      };
      r24 = dyn stop[, domain](p12, NA_LGL);
      return r24;
    L1():
      return NULL;
    };
    r26 = dyn ____(p4, p13);
    check L4() else D3();
  D3():
    deopt 10 [r26];
  L4():
    popenv;
    return r26;
  }
}