fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058174622;
    st url_db_from_package_Rd_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg lapply:cls, reg db1:*, reg db2:V, reg p1:p(V +), reg _get_urls_from_Rd:*, reg _get_urls_from_Rd1:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V, reg url_db:cls, reg unlist:cls, reg urls:*, reg urls1:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg file_path:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg urls2:*, reg urls3:V, reg names:cls, reg r13:V, reg p6:p(V +), reg r15:V, reg lengths:cls, reg urls4:*, reg urls5:V, reg p7:p(V +), reg r17:V, reg rep_int:cls, reg r18:V, reg p8:p(V +), reg r20:V |
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
        _get_urls_from_Rd = ld `.get_urls_from_Rd`;
        _get_urls_from_Rd1 = force? _get_urls_from_Rd;
        checkMissing(_get_urls_from_Rd1);
        return _get_urls_from_Rd1;
      };
      r3 = dyn lapply(p1, p2);
      return r3;
    };
    r5 = dyn Filter(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    st urls = r5;
    url_db = ldf url_db;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p5 = prom<V +>{
      unlist = ldf unlist;
      p4 = prom<V +>{
        urls = ld urls;
        urls1 = force? urls;
        checkMissing(urls1);
        return urls1;
      };
      r7 = dyn unlist[, `use.names`](p4, FALSE);
      return r7;
    };
    p8 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r10):
      return r10;
    L1():
      file_path = ldf `file.path`;
      p6 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        urls2 = ld urls;
        urls3 = force? urls2;
        checkMissing(urls3);
        names = ldf names in base;
        r13 = dyn names(urls3);
        goto L0(r13);
      L2():
        r11 = dyn base1(<sym urls>);
        goto L0(r11);
      };
      r15 = dyn file_path("man", p6);
      lengths = ldf lengths;
      p7 = prom<V +>{
        urls4 = ld urls;
        urls5 = force? urls4;
        checkMissing(urls5);
        return urls5;
      };
      r17 = dyn lengths(p7);
      rep_int = ldf `rep.int` in base;
      r18 = dyn rep_int(r15, r17);
      goto L0(r18);
    L2():
      r9 = dyn base(<lang file.path("man", names(urls))>, <lang lengths(urls)>);
      goto L0(r9);
    };
    r20 = dyn url_db(p5, p8);
    check L3() else D3();
  D3():
    deopt 10 [r20];
  L3():
    popenv;
    return r20;
  }
}