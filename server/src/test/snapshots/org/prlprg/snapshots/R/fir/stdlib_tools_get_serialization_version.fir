fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3808846358;
    st get_serialization_version = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3808846358(allfiles) {
  (reg allfiles:*) -+> V { var allfiles:*, reg r:cls, reg r1:cls, reg grep:cls, reg allfiles1:*, reg allfiles2:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg grep1:cls, reg allfiles3:*, reg allfiles4:V, reg p1:p(V +), reg r7:V, reg grep2:cls, reg allfiles5:*, reg allfiles6:V, reg p2:p(V +), reg r9:V, reg c:cls, reg r10:V, reg sapply:cls, reg loadfiles:*, reg loadfiles1:V, reg p3:p(V +), reg getVerLoad:*, reg getVerLoad1:V, reg p4:p(V +), reg r13:V, reg sapply1:cls, reg serfiles:*, reg serfiles1:V, reg p5:p(V +), reg getVerSer:*, reg getVerSer1:V, reg p6:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg vers1:*, reg vers2:V, reg vers3:*, reg vers4:V, reg c1:cls, reg r19:V |
    mkenv;
    st allfiles = allfiles;
    r = clos inner270641308;
    st getVerLoad = r;
    r1 = clos inner270641308;
    st getVerSer = r1;
    grep = ldf grep;
    check L2() else D0();
  D0():
    deopt 7 [];
  L2():
    p = prom<V +>{
      allfiles1 = ld allfiles;
      allfiles2 = force? allfiles1;
      checkMissing(allfiles2);
      return allfiles2;
    };
    r3 = dyn grep[, , value]("[.](rda|RData|Rdata|rdata|Rda|bam|Rbin)$", p, TRUE);
    check L3() else D1();
  D1():
    deopt 12 [r3];
  L3():
    st loadfiles = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r5):
    st serfiles = r5;
    sapply = ldf sapply;
    check L11() else D7();
  L4():
    grep1 = ldf grep;
    check L6() else D2();
  L5():
    r4 = dyn base(<lang grep("[.](rds|RDS|Rds|rdx)$", allfiles, value=TRUE)>, <lang grep("build/partial[.]rdb$", allfiles, value=TRUE)>);
    goto L0(r4);
  D2():
    deopt 17 [];
  D7():
    deopt 34 [];
  L6():
    p1 = prom<V +>{
      allfiles3 = ld allfiles;
      allfiles4 = force? allfiles3;
      checkMissing(allfiles4);
      return allfiles4;
    };
    r7 = dyn grep1[, , value]("[.](rds|RDS|Rds|rdx)$", p1, TRUE);
    check L7() else D3();
  L11():
    p3 = prom<V +>{
      loadfiles = ld loadfiles;
      loadfiles1 = force? loadfiles;
      checkMissing(loadfiles1);
      return loadfiles1;
    };
    p4 = prom<V +>{
      getVerLoad = ld getVerLoad;
      getVerLoad1 = force? getVerLoad;
      checkMissing(getVerLoad1);
      return getVerLoad1;
    };
    r13 = dyn sapply(p3, p4);
    check L12() else D8();
  D3():
    deopt 22 [r7];
  D8():
    deopt 37 [r13];
  L7():
    grep2 = ldf grep;
    check L8() else D4();
  L12():
    st vers1 = r13;
    sapply1 = ldf sapply;
    check L13() else D9();
  D4():
    deopt 24 [];
  D9():
    deopt 40 [];
  L8():
    p2 = prom<V +>{
      allfiles5 = ld allfiles;
      allfiles6 = force? allfiles5;
      checkMissing(allfiles6);
      return allfiles6;
    };
    r9 = dyn grep2[, , value]("build/partial[.]rdb$", p2, TRUE);
    check L9() else D5();
  L13():
    p5 = prom<V +>{
      serfiles = ld serfiles;
      serfiles1 = force? serfiles;
      checkMissing(serfiles1);
      return serfiles1;
    };
    p6 = prom<V +>{
      getVerSer = ld getVerSer;
      getVerSer1 = force? getVerSer;
      checkMissing(getVerSer1);
      return getVerSer1;
    };
    r16 = dyn sapply1(p5, p6);
    check L14() else D10();
  D5():
    deopt 29 [r9];
  D10():
    deopt 43 [r16];
  L9():
    c = ldf c in base;
    r10 = dyn c(r7, r9);
    check L10() else D6();
  L14():
    st vers2 = r16;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D6():
    deopt 31 [r10];
  L1(r18):
    popenv;
    return r18;
  L10():
    goto L0(r10);
  L15():
    vers1 = ld vers1;
    check L17() else D11();
  L16():
    r17 = dyn base1(<sym vers1>, <sym vers2>);
    goto L1(r17);
  D11():
    deopt 47 [vers1];
  L17():
    vers2 = force? vers1;
    checkMissing(vers2);
    vers3 = ld vers2;
    check L18() else D12();
  D12():
    deopt 49 [vers3];
  L18():
    vers4 = force? vers3;
    checkMissing(vers4);
    c1 = ldf c in base;
    r19 = dyn c1(vers2, vers4);
    check L19() else D13();
  D13():
    deopt 52 [r19];
  L19():
    goto L1(r19);
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg gzfile:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg on_exit:cls, reg r4:V, reg tryCatch:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg con:*, reg con1:V, reg loadInfoFromConn2:cls, reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg p1:p(V +), reg r12:cls, reg p2:p(V +), reg r14:V |
    mkenv;
    st file = file;
    gzfile = ldf gzfile;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r1 = dyn gzfile(p, "rb");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    st con = r1;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    tryCatch = ldf tryCatch;
    check L5() else D2();
  L3():
    on_exit = ldf `on.exit` in base;
    r4 = dyn on_exit(<lang close(con)>);
    goto L0();
  L4():
    r2 = dyn base(<lang close(con)>);
    goto L0();
  D2():
    deopt 10 [];
  L5():
    p1 = prom<V +>{
      sym1 = ldf `.Internal`;
      base1 = ldf `.Internal` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      c = `is.object`(r6);
      if c then L4() else L5(r6);
    L1():
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      loadInfoFromConn2 = ldf loadInfoFromConn2 in base;
      r7 = dyn loadInfoFromConn2(con1);
      goto L0(r7);
    L2():
      r5 = dyn base1(<lang loadInfoFromConn2(con)>);
      goto L0(r5);
    L3(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("$", r6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r9):
      r10 = `$`(r9, <sym version>);
      goto L3(r10);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    p2 = prom<V +>{
      r12 = clos inner3708401697;
      return r12;
    };
    r14 = dyn tryCatch[, error](p1, p2);
    check L6() else D3();
  D3():
    deopt 14 [r14];
  L6():
    popenv;
    return r14;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return 1;
  }
}