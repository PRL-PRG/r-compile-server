fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058174622;
    st analyze_licenses_in_license_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg cbind:cls, reg db1:*, reg db2:V, reg p:p(V +), reg analyze_licenses:cls, reg db3:*, reg db4:V, reg c:L, reg db6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p1:p(V +), reg db7:*, reg db8:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg results:*, reg results1:V |
    mkenv;
    st db = db;
    cbind = ldf cbind;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    p3 = prom<V +>{
      analyze_licenses = ldf analyze_licenses;
      p1 = prom<V +>{
        db3 = ld db;
        db4 = force? db3;
        checkMissing(db4);
        c = `is.object`(db4);
        if c then L1() else L2(db4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", db4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(db6):
        r1 = `$`(db6, <sym License>);
        goto L0(r1);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p2 = prom<V +>{
        db7 = ld db;
        db8 = force? db7;
        checkMissing(db8);
        return db8;
      };
      r4 = dyn analyze_licenses(p1, p2);
      return r4;
    };
    r6 = dyn cbind(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r6];
  L1():
    st results = r6;
    results = ld results;
    check L2() else D2();
  D2():
    deopt 6 [results];
  L2():
    results1 = force? results;
    checkMissing(results1);
    popenv;
    return results1;
  }
}