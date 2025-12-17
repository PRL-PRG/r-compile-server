fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058174622;
    st doi_db_from_package_Rd_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg lapply:cls, reg db1:*, reg db2:V, reg p1:p(V +), reg _get_dois_from_Rd:*, reg _get_dois_from_Rd1:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V, reg doi_db:cls, reg _canonicalize_doi:cls, reg unlist:cls, reg dois:*, reg dois1:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg r9:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg file_path:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg dois2:*, reg dois3:V, reg names:cls, reg r15:V, reg p7:p(V +), reg r17:V, reg lengths:cls, reg dois4:*, reg dois5:V, reg p8:p(V +), reg r19:V, reg rep_int:cls, reg r20:V, reg p9:p(V +), reg r22:V |
    mkenv;
    st db = db;
    Filter = ldf Filter;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        db1 = ld db;
        db2 = force? db1;
        checkMissing(db2);
        return db2;
      };
      p2 = prom<V +>{
        _get_dois_from_Rd = ld `.get_dois_from_Rd`;
        _get_dois_from_Rd1 = force? _get_dois_from_Rd;
        checkMissing(_get_dois_from_Rd1);
        return _get_dois_from_Rd1;
      };
      r3 = dyn lapply(p1, p2);
      return r3;
    };
    r5 = dyn Filter(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    st dois = r5;
    doi_db = ldf doi_db;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p6 = prom<V +>{
      _canonicalize_doi = ldf `.canonicalize_doi`;
      p5 = prom<V +>{
        unlist = ldf unlist;
        p4 = prom<V +>{
          dois = ld dois;
          dois1 = force? dois;
          checkMissing(dois1);
          return dois1;
        };
        r7 = dyn unlist[, `use.names`](p4, FALSE);
        return r7;
      };
      r9 = dyn _canonicalize_doi(p5);
      return r9;
    };
    p9 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      file_path = ldf `file.path`;
      p7 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        dois2 = ld dois;
        dois3 = force? dois2;
        checkMissing(dois3);
        names = ldf names in base;
        r15 = dyn names(dois3);
        goto L0(r15);
      L2():
        r13 = dyn base1(<sym dois>);
        goto L0(r13);
      };
      r17 = dyn file_path("man", p7);
      lengths = ldf lengths;
      p8 = prom<V +>{
        dois4 = ld dois;
        dois5 = force? dois4;
        checkMissing(dois5);
        return dois5;
      };
      r19 = dyn lengths(p8);
      rep_int = ldf `rep.int` in base;
      r20 = dyn rep_int(r17, r19);
      goto L0(r20);
    L2():
      r11 = dyn base(<lang file.path("man", names(dois))>, <lang lengths(dois)>);
      goto L0(r11);
    };
    r22 = dyn doi_db(p6, p9);
    check L3() else D3();
  D3():
    deopt 10 [r22];
  L3():
    popenv;
    return r22;
  }
}