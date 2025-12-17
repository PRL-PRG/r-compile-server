fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner71769280;
    st check_CRAN_mirrors = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner71769280(mirrors, verbose) {
  (reg mirrors:*, reg verbose:*) -+> V { var mirrors:*, reg mirrors_isMissing:L, reg mirrors_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg r:cls, reg r1:cls, reg r2:cls, reg r3:cls, reg r4:cls, reg read_package_db:cls, reg master:*, reg master1:V, reg p:p(V +), reg r6:V, reg read_timestamp:cls, reg master2:*, reg master3:V, reg p1:p(V +), reg path_ts1:*, reg path_ts2:V, reg p2:p(V +), reg r9:V, reg read_timestamp1:cls, reg master4:*, reg master5:V, reg p3:p(V +), reg path_ts3:*, reg path_ts4:V, reg p4:p(V +), reg r12:V, reg read_timestamp2:cls, reg master6:*, reg master7:V, reg p5:p(V +), reg path_ts5:*, reg path_ts6:V, reg p6:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg mirrors1:*, reg mirrors2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg __:cls, reg r20:V, reg r21:cls, reg r22:V, reg c2:L, reg r24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r25:V, reg as_character:cls, reg r26:V, reg lapply:cls, reg mirrors3:*, reg mirrors4:V, reg p7:p(V +), reg r29:cls, reg p8:p(V +), reg r31:V, reg mirrors5:*, reg mirrors6:V, reg l:*, reg names__:cls, reg r32:V, reg results:*, reg results1:V |
    mkenv;
    mirrors_isMissing = missing.0(mirrors);
    if mirrors_isMissing then L0(NULL) else L0(mirrors);
  L0(mirrors_orDefault):
    st mirrors = mirrors_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    r = clos inner182818039;
    st retry_upon_error = r;
    r1 = clos inner2918859386;
    st read_package_db = r1;
    r2 = clos inner3621397843;
    st read_timestamp = r2;
    r3 = clos inner4198313549;
    st if_ok = r3;
    r4 = clos inner3279703327;
    st check_mirror = r4;
    st master = "https://CRAN.R-project.org/";
    st path_ts1 = "TIME";
    st path_ts2 = "bin/windows/contrib/r-release/TIME_r-release";
    st path_ts3 = "bin/windows/contrib/r-old-release/TIME_r-old-release";
    read_package_db = ldf read_package_db;
    check L6() else D0();
  D0():
    deopt 28 [];
  L6():
    p = prom<V +>{
      master = ld master;
      master1 = force? master;
      checkMissing(master1);
      return master1;
    };
    r6 = dyn read_package_db(p);
    check L7() else D1();
  D1():
    deopt 30 [r6];
  L7():
    st master_packages = r6;
    read_timestamp = ldf read_timestamp;
    check L8() else D2();
  D2():
    deopt 33 [];
  L8():
    p1 = prom<V +>{
      master2 = ld master;
      master3 = force? master2;
      checkMissing(master3);
      return master3;
    };
    p2 = prom<V +>{
      path_ts1 = ld path_ts1;
      path_ts2 = force? path_ts1;
      checkMissing(path_ts2);
      return path_ts2;
    };
    r9 = dyn read_timestamp(p1, p2);
    check L9() else D3();
  D3():
    deopt 36 [r9];
  L9():
    st master_ts1 = r9;
    read_timestamp1 = ldf read_timestamp;
    check L10() else D4();
  D4():
    deopt 39 [];
  L10():
    p3 = prom<V +>{
      master4 = ld master;
      master5 = force? master4;
      checkMissing(master5);
      return master5;
    };
    p4 = prom<V +>{
      path_ts3 = ld path_ts2;
      path_ts4 = force? path_ts3;
      checkMissing(path_ts4);
      return path_ts4;
    };
    r12 = dyn read_timestamp1(p3, p4);
    check L11() else D5();
  D5():
    deopt 42 [r12];
  L11():
    st master_ts2 = r12;
    read_timestamp2 = ldf read_timestamp;
    check L12() else D6();
  D6():
    deopt 45 [];
  L12():
    p5 = prom<V +>{
      master6 = ld master;
      master7 = force? master6;
      checkMissing(master7);
      return master7;
    };
    p6 = prom<V +>{
      path_ts5 = ld path_ts3;
      path_ts6 = force? path_ts5;
      checkMissing(path_ts6);
      return path_ts6;
    };
    r15 = dyn read_timestamp2(p5, p6);
    check L13() else D7();
  D7():
    deopt 48 [r15];
  L13():
    st master_ts3 = r15;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2(r17):
    c1 = `as.logical`(r17);
    if c1 then L17() else L3();
  L14():
    mirrors1 = ld mirrors;
    check L16() else D8();
  L15():
    r16 = dyn base(<sym mirrors>);
    goto L2(r16);
  D8():
    deopt 51 [mirrors1];
  L3():
    goto L5();
  L5():
    lapply = ldf lapply;
    check L29() else D13();
  L16():
    mirrors2 = force? mirrors1;
    checkMissing(mirrors2);
    c = `==`(mirrors2, NULL);
    goto L2(c);
  L17():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D13():
    deopt 72 [];
  L4(r19):
    st mirrors = r19;
    goto L5();
  L18():
    __ = ldf `::`;
    check L20() else D9();
  L19():
    r18 = dyn base1(<lang `$`(`::`(utils, getCRANmirrors)(all=TRUE), URL)>);
    goto L4(r18);
  L29():
    p7 = prom<V +>{
      mirrors3 = ld mirrors;
      mirrors4 = force? mirrors3;
      checkMissing(mirrors4);
      return mirrors4;
    };
    p8 = prom<V +>{
      r29 = clos inner2296048169;
      return r29;
    };
    r31 = dyn lapply(p7, p8);
    check L30() else D14();
  D9():
    deopt 57 [];
  D14():
    deopt 75 [r31];
  L20():
    r20 = dyn __("utils", "getCRANmirrors");
    check L21() else D10();
  L30():
    st results = r31;
    mirrors5 = ld mirrors;
    check L31() else D15();
  D10():
    deopt 60 [r20];
  D15():
    deopt 77 [mirrors5];
  L21():
    checkFun.0(r20);
    r21 = r20 as cls;
    r22 = dyn r21[all](TRUE);
    check L22() else D11();
  L31():
    mirrors6 = force? mirrors5;
    checkMissing(mirrors6);
    l = ld results;
    names__ = ldf `names<-`;
    check L32() else D16();
  D11():
    deopt 64 [r22];
  D16():
    deopt 80 [mirrors6, l, mirrors6];
  L22():
    c2 = `is.object`(r22);
    if c2 then L24() else L25(r22);
  L32():
    r32 = dyn names__(l, NULL, mirrors6);
    check L33() else D17();
  D17():
    deopt 82 [mirrors6, r32];
  L23(dx1):
    as_character = ldf `as.character` in base;
    r26 = dyn as_character(dx1);
    check L27() else D12();
  L24():
    dr = tryDispatchBuiltin.1("$", r22);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(r24):
    r25 = `$`(r24, <sym URL>);
    goto L23(r25);
  L33():
    st results = r32;
    results = ld results;
    check L34() else D18();
  D12():
    deopt 67 [r26];
  D18():
    deopt 84 [results];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L27():
    goto L4(r26);
  L34():
    results1 = force? results;
    checkMissing(results1);
    popenv;
    return results1;
  }
}
fun inner182818039(expr, n) {
  (reg expr:*, reg n:*) -+> V { var expr:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg tryCatch:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg identity:*, reg identity1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg y:*, reg y1:V, reg inherits:cls, reg r5:V, reg r6:V, reg c:L, reg c1:V, reg i:*, reg i1:V, reg n1:*, reg n2:V, reg r7:V, reg c3:L, reg c4:V, reg c6:L, reg i2:*, reg i3:V, reg r9:V, reg y2:*, reg y3:V |
    mkenv;
    st expr = expr;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(3) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    st i = 1;
    goto L6();
  L6():
    tryCatch = ldf tryCatch;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p1 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r2 = dyn tryCatch[, error](p, p1);
    check L8() else D1();
  D1():
    deopt 8 [r2];
  L8():
    st y = r2;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L2(c) else L13();
  L9():
    y = ld y;
    check L11() else D2();
  L10():
    r3 = dyn base(<sym y>, "error");
    goto L1(r3);
  D2():
    deopt 12 [y];
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L17() else L3();
  L11():
    y1 = force? y;
    checkMissing(y1);
    inherits = ldf inherits in base;
    r5 = dyn inherits(y1, "error", FALSE);
    check L12() else D3();
  L13():
    i = ld i;
    check L14() else D4();
  D3():
    deopt 17 [r5];
  D4():
    deopt 19 [c, i];
  L3():
    i2 = ld i;
    check L20() else D6();
  L12():
    goto L1(r5);
  L14():
    i1 = force? i;
    checkMissing(i1);
    n1 = ld n;
    check L15() else D5();
  L17():
    y2 = ld y;
    check L22() else D7();
  D5():
    deopt 20 [c, i1, n1];
  D6():
    deopt 28 [i2];
  D7():
    deopt 36 [y2];
  L15():
    n2 = force? n1;
    checkMissing(n2);
    r7 = `>=`(i1, n2);
    c3 = `as.logical`(r7);
    c4 = `||`(c, c3);
    goto L2(c4);
  L20():
    i3 = force? i2;
    checkMissing(i3);
    r9 = `+`(i3, 1);
    st i = r9;
    goto L6();
  L22():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  }
}
fun inner2918859386(baseurl) {
  (reg baseurl:*) -+> V { var baseurl:*, reg sprintf:cls, reg baseurl1:*, reg baseurl2:V, reg p:p(V +), reg r1:V, reg retry_upon_error:cls, reg gzcon:cls, reg url:cls, reg path:*, reg path1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg on_exit:cls, reg r8:V, reg readLines:cls, reg con:*, reg con1:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg db:*, reg db1:V, reg inherits:cls, reg r15:V, reg c:L, reg sprintf1:cls, reg path2:*, reg path3:V, reg p5:p(V +), reg conditionMessage:cls, reg db2:*, reg db3:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg simpleError:cls, reg msg:*, reg msg1:V, reg p8:p(V +), reg r22:V, reg db4:*, reg db5:V |
    mkenv;
    st baseurl = baseurl;
    sprintf = ldf sprintf;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      baseurl1 = ld baseurl;
      baseurl2 = force? baseurl1;
      checkMissing(baseurl2);
      return baseurl2;
    };
    r1 = dyn sprintf("%ssrc/contrib/PACKAGES.gz", p);
    check L4() else D1();
  D1():
    deopt 4 [r1];
  L4():
    st path = r1;
    retry_upon_error = ldf retry_upon_error;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    p4 = prom<V +>{
      gzcon = ldf gzcon;
      p2 = prom<V +>{
        url = ldf url;
        p1 = prom<V +>{
          path = ld path;
          path1 = force? path;
          checkMissing(path1);
          return path1;
        };
        r3 = dyn url(p1, "rb");
        return r3;
      };
      r5 = dyn gzcon(p2);
      st con = r5;
      sym = ldf `on.exit`;
      base = ldf `on.exit` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0():
      readLines = ldf readLines;
      p3 = prom<V +>{
        con = ld con;
        con1 = force? con;
        checkMissing(con1);
        return con1;
      };
      r10 = dyn readLines(p3);
      return r10;
    L1():
      on_exit = ldf `on.exit` in base;
      r8 = dyn on_exit(<lang close(con)>);
      goto L0();
    L2():
      r6 = dyn base(<lang close(con)>);
      goto L0();
    };
    r12 = dyn retry_upon_error(p4);
    check L6() else D3();
  D3():
    deopt 9 [r12];
  L6():
    st db = r12;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L0(r14):
    c = `as.logical`(r14);
    if c then L11() else L1();
  L7():
    db = ld db;
    check L9() else D4();
  L8():
    r13 = dyn base1(<sym db>, "error");
    goto L0(r13);
  D4():
    deopt 13 [db];
  L1():
    db4 = ld db;
    check L18() else D10();
  L9():
    db1 = force? db;
    checkMissing(db1);
    inherits = ldf inherits in base;
    r15 = dyn inherits(db1, "error", FALSE);
    check L10() else D5();
  L11():
    sprintf1 = ldf sprintf;
    check L12() else D6();
  D5():
    deopt 18 [r15];
  D6():
    deopt 20 [];
  D10():
    deopt 33 [db4];
  L10():
    goto L0(r15);
  L12():
    p5 = prom<V +>{
      path2 = ld path;
      path3 = force? path2;
      checkMissing(path3);
      return path3;
    };
    p7 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p6 = prom<V +>{
        db2 = ld db;
        db3 = force? db2;
        checkMissing(db3);
        return db3;
      };
      r18 = dyn conditionMessage(p6);
      return r18;
    };
    r20 = dyn sprintf1("Reading %s failed with message: %s", p5, p7);
    check L13() else D7();
  L18():
    db5 = force? db4;
    checkMissing(db5);
    popenv;
    return db5;
  D7():
    deopt 24 [r20];
  L13():
    st msg = r20;
    simpleError = ldf simpleError;
    check L14() else D8();
  D8():
    deopt 27 [];
  L14():
    p8 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r22 = dyn simpleError(p8);
    check L15() else D9();
  D9():
    deopt 29 [r22];
  L15():
    popenv;
    return r22;
  }
}
fun inner3621397843(baseurl, path) {
  (reg baseurl:*, reg path:*) -+> V { var baseurl:*, var path:*, reg sprintf:cls, reg baseurl1:*, reg baseurl2:V, reg p:p(V +), reg path1:*, reg path2:V, reg p1:p(V +), reg r2:V, reg retry_upon_error:cls, reg readLines:cls, reg path3:*, reg path4:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg ts:*, reg ts1:V, reg inherits:cls, reg r9:V, reg c:L, reg sprintf1:cls, reg path5:*, reg path6:V, reg p4:p(V +), reg conditionMessage:cls, reg ts2:*, reg ts3:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg r14:V, reg simpleError:cls, reg msg:*, reg msg1:V, reg p7:p(V +), reg r16:V, reg as_POSIXct:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg ts4:*, reg ts5:V, reg as_numeric:cls, reg r21:V, reg p8:p(V +), reg r23:V |
    mkenv;
    st baseurl = baseurl;
    st path = path;
    sprintf = ldf sprintf;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      baseurl1 = ld baseurl;
      baseurl2 = force? baseurl1;
      checkMissing(baseurl2);
      return baseurl2;
    };
    p1 = prom<V +>{
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      return path2;
    };
    r2 = dyn sprintf("%s%s", p, p1);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    st path = r2;
    retry_upon_error = ldf retry_upon_error;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p3 = prom<V +>{
      readLines = ldf readLines;
      p2 = prom<V +>{
        path3 = ld path;
        path4 = force? path3;
        checkMissing(path4);
        return path4;
      };
      r4 = dyn readLines(p2);
      return r4;
    };
    r6 = dyn retry_upon_error(p3);
    check L6() else D3();
  D3():
    deopt 10 [r6];
  L6():
    st ts = r6;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r8):
    c = `as.logical`(r8);
    if c then L11() else L1();
  L7():
    ts = ld ts;
    check L9() else D4();
  L8():
    r7 = dyn base(<sym ts>, "error");
    goto L0(r7);
  D4():
    deopt 14 [ts];
  L1():
    as_POSIXct = ldf `as.POSIXct`;
    check L18() else D10();
  L9():
    ts1 = force? ts;
    checkMissing(ts1);
    inherits = ldf inherits in base;
    r9 = dyn inherits(ts1, "error", FALSE);
    check L10() else D5();
  L11():
    sprintf1 = ldf sprintf;
    check L12() else D6();
  D5():
    deopt 19 [r9];
  D6():
    deopt 21 [];
  D10():
    deopt 35 [];
  L10():
    goto L0(r9);
  L12():
    p4 = prom<V +>{
      path5 = ld path;
      path6 = force? path5;
      checkMissing(path6);
      return path6;
    };
    p6 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p5 = prom<V +>{
        ts2 = ld ts;
        ts3 = force? ts2;
        checkMissing(ts3);
        return ts3;
      };
      r12 = dyn conditionMessage(p5);
      return r12;
    };
    r14 = dyn sprintf1("Reading %s failed with message: %s", p4, p6);
    check L13() else D7();
  L18():
    p8 = prom<V +>{
      sym1 = ldf `as.numeric`;
      base1 = ldf `as.numeric` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      ts4 = ld ts;
      ts5 = force? ts4;
      checkMissing(ts5);
      as_numeric = ldf `as.numeric` in base;
      r21 = dyn as_numeric(ts5);
      goto L0(r21);
    L2():
      r19 = dyn base1(<sym ts>);
      goto L0(r19);
    };
    r23 = dyn as_POSIXct[, origin](p8, "1970-01-01");
    check L19() else D11();
  D7():
    deopt 25 [r14];
  D11():
    deopt 39 [r23];
  L13():
    st msg = r14;
    simpleError = ldf simpleError;
    check L14() else D8();
  L19():
    popenv;
    return r23;
  D8():
    deopt 28 [];
  L14():
    p7 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r16 = dyn simpleError(p7);
    check L15() else D9();
  D9():
    deopt 30 [r16];
  L15():
    popenv;
    return r16;
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg u1:*, reg u2:V, reg inherits:cls, reg r2:V, reg c:L, reg u3:*, reg u4:V, reg v1:*, reg v2:V |
    mkenv;
    st u = u;
    st v = v;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    u1 = ld u;
    check L4() else D0();
  L3():
    r = dyn base(<sym u>, "error");
    goto L0(r);
  D0():
    deopt 2 [u1];
  L1():
    v1 = ld v;
    check L9() else D3();
  L4():
    u2 = force? u1;
    checkMissing(u2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(u2, "error", FALSE);
    check L5() else D1();
  L6():
    u3 = ld u;
    check L7() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [u3];
  D3():
    deopt 10 [v1];
  L5():
    goto L0(r2);
  L7():
    u4 = force? u3;
    checkMissing(u4);
    popenv;
    return u4;
  L9():
    v2 = force? v1;
    checkMissing(v2);
    popenv;
    return v2;
  }
}
fun inner3279703327(mirror) {
  (reg mirror:*) -+> V { var mirror:*, reg read_package_db:cls, reg mirror1:*, reg mirror2:V, reg p:p(V +), reg r1:V, reg read_timestamp:cls, reg mirror3:*, reg mirror4:V, reg p1:p(V +), reg path_ts1:*, reg path_ts2:V, reg p2:p(V +), reg r4:V, reg read_timestamp1:cls, reg mirror5:*, reg mirror6:V, reg p3:p(V +), reg path_ts3:*, reg path_ts4:V, reg p4:p(V +), reg r7:V, reg read_timestamp2:cls, reg mirror7:*, reg mirror8:V, reg p5:p(V +), reg path_ts5:*, reg path_ts6:V, reg p6:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg if_ok:cls, reg mirror_packages:*, reg mirror_packages1:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg sprintf:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg setdiff:cls, reg master_packages:*, reg master_packages1:V, reg p8:p(V +), reg mirror_packages2:*, reg mirror_packages3:V, reg p9:p(V +), reg r20:V, reg length:cls, reg r21:V, reg p10:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg master_packages2:*, reg master_packages3:V, reg length1:cls, reg r25:V, reg p11:p(V +), reg r27:V, reg sprintf1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg setdiff1:cls, reg mirror_packages4:*, reg mirror_packages5:V, reg p12:p(V +), reg master_packages4:*, reg master_packages5:V, reg p13:p(V +), reg r32:V, reg length2:cls, reg r33:V, reg p14:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg mirror_packages6:*, reg mirror_packages7:V, reg length3:cls, reg r37:V, reg p15:p(V +), reg r39:V, reg c:cls, reg r40:V, reg p16:p(V +), reg r42:V, reg if_ok1:cls, reg mirror_ts1:*, reg mirror_ts2:V, reg p17:p(V +), reg difftime:cls, reg master_ts1:*, reg master_ts2:V, reg p18:p(V +), reg mirror_ts3:*, reg mirror_ts4:V, reg p19:p(V +), reg r46:V, reg p20:p(V +), reg r48:V, reg if_ok2:cls, reg mirror_ts5:*, reg mirror_ts6:V, reg p21:p(V +), reg difftime1:cls, reg master_ts3:*, reg master_ts4:V, reg p22:p(V +), reg mirror_ts7:*, reg mirror_ts8:V, reg p23:p(V +), reg r52:V, reg p24:p(V +), reg r54:V, reg if_ok3:cls, reg mirror_ts9:*, reg mirror_ts10:V, reg p25:p(V +), reg difftime2:cls, reg master_ts5:*, reg master_ts6:V, reg p26:p(V +), reg mirror_ts11:*, reg mirror_ts12:V, reg p27:p(V +), reg r58:V, reg p28:p(V +), reg r60:V, reg list:cls, reg r61:V |
    mkenv;
    st mirror = mirror;
    read_package_db = ldf read_package_db;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      mirror1 = ld mirror;
      mirror2 = force? mirror1;
      checkMissing(mirror2);
      return mirror2;
    };
    r1 = dyn read_package_db(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st mirror_packages = r1;
    read_timestamp = ldf read_timestamp;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      mirror3 = ld mirror;
      mirror4 = force? mirror3;
      checkMissing(mirror4);
      return mirror4;
    };
    p2 = prom<V +>{
      path_ts1 = ld path_ts1;
      path_ts2 = force? path_ts1;
      checkMissing(path_ts2);
      return path_ts2;
    };
    r4 = dyn read_timestamp(p1, p2);
    check L4() else D3();
  D3():
    deopt 9 [r4];
  L4():
    st mirror_ts1 = r4;
    read_timestamp1 = ldf read_timestamp;
    check L5() else D4();
  D4():
    deopt 12 [];
  L5():
    p3 = prom<V +>{
      mirror5 = ld mirror;
      mirror6 = force? mirror5;
      checkMissing(mirror6);
      return mirror6;
    };
    p4 = prom<V +>{
      path_ts3 = ld path_ts2;
      path_ts4 = force? path_ts3;
      checkMissing(path_ts4);
      return path_ts4;
    };
    r7 = dyn read_timestamp1(p3, p4);
    check L6() else D5();
  D5():
    deopt 15 [r7];
  L6():
    st mirror_ts2 = r7;
    read_timestamp2 = ldf read_timestamp;
    check L7() else D6();
  D6():
    deopt 18 [];
  L7():
    p5 = prom<V +>{
      mirror7 = ld mirror;
      mirror8 = force? mirror7;
      checkMissing(mirror8);
      return mirror8;
    };
    p6 = prom<V +>{
      path_ts5 = ld path_ts3;
      path_ts6 = force? path_ts5;
      checkMissing(path_ts6);
      return path_ts6;
    };
    r10 = dyn read_timestamp2(p5, p6);
    check L8() else D7();
  D7():
    deopt 21 [r10];
  L8():
    st mirror_ts3 = r10;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r12):
    popenv;
    return r12;
  L9():
    if_ok = ldf if_ok;
    check L11() else D8();
  L10():
    r11 = dyn base[PACKAGES, TIME, `TIME_r-release`, `TIME_r-old-release`](<lang if_ok(mirror_packages, c(Delta_master_mirror=sprintf("%d/%d", length(setdiff(master_packages, mirror_packages)), length(master_packages)), Delta_mirror_master=sprintf("%d/%d", length(setdiff(mirror_packages, master_packages)), length(mirror_packages))))>, <lang if_ok(mirror_ts1, difftime(master_ts1, mirror_ts1))>, <lang if_ok(mirror_ts2, difftime(master_ts2, mirror_ts2))>, <lang if_ok(mirror_ts3, difftime(master_ts3, mirror_ts3))>);
    goto L0(r11);
  D8():
    deopt 26 [];
  L11():
    p7 = prom<V +>{
      mirror_packages = ld mirror_packages;
      mirror_packages1 = force? mirror_packages;
      checkMissing(mirror_packages1);
      return mirror_packages1;
    };
    p16 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      sprintf = ldf sprintf;
      p10 = prom<V +>{
        sym2 = ldf length;
        base2 = ldf length in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        setdiff = ldf setdiff;
        p8 = prom<V +>{
          master_packages = ld master_packages;
          master_packages1 = force? master_packages;
          checkMissing(master_packages1);
          return master_packages1;
        };
        p9 = prom<V +>{
          mirror_packages2 = ld mirror_packages;
          mirror_packages3 = force? mirror_packages2;
          checkMissing(mirror_packages3);
          return mirror_packages3;
        };
        r20 = dyn setdiff(p8, p9);
        length = ldf length in base;
        r21 = dyn length(r20);
        goto L0(r21);
      L2():
        r16 = dyn base2(<lang setdiff(master_packages, mirror_packages)>);
        goto L0(r16);
      };
      p11 = prom<V +>{
        sym3 = ldf length;
        base3 = ldf length in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        master_packages2 = ld master_packages;
        master_packages3 = force? master_packages2;
        checkMissing(master_packages3);
        length1 = ldf length in base;
        r25 = dyn length1(master_packages3);
        goto L0(r25);
      L2():
        r23 = dyn base3(<sym master_packages>);
        goto L0(r23);
      };
      r27 = dyn sprintf("%d/%d", p10, p11);
      sprintf1 = ldf sprintf;
      p14 = prom<V +>{
        sym4 = ldf length;
        base4 = ldf length in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r29):
        return r29;
      L1():
        setdiff1 = ldf setdiff;
        p12 = prom<V +>{
          mirror_packages4 = ld mirror_packages;
          mirror_packages5 = force? mirror_packages4;
          checkMissing(mirror_packages5);
          return mirror_packages5;
        };
        p13 = prom<V +>{
          master_packages4 = ld master_packages;
          master_packages5 = force? master_packages4;
          checkMissing(master_packages5);
          return master_packages5;
        };
        r32 = dyn setdiff1(p12, p13);
        length2 = ldf length in base;
        r33 = dyn length2(r32);
        goto L0(r33);
      L2():
        r28 = dyn base4(<lang setdiff(mirror_packages, master_packages)>);
        goto L0(r28);
      };
      p15 = prom<V +>{
        sym5 = ldf length;
        base5 = ldf length in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r36):
        return r36;
      L1():
        mirror_packages6 = ld mirror_packages;
        mirror_packages7 = force? mirror_packages6;
        checkMissing(mirror_packages7);
        length3 = ldf length in base;
        r37 = dyn length3(mirror_packages7);
        goto L0(r37);
      L2():
        r35 = dyn base5(<sym mirror_packages>);
        goto L0(r35);
      };
      r39 = dyn sprintf1("%d/%d", p14, p15);
      c = ldf c in base;
      r40 = dyn c(r27, r39);
      goto L0(r40);
    L2():
      r14 = dyn base1[Delta_master_mirror, Delta_mirror_master](<lang sprintf("%d/%d", length(setdiff(master_packages, mirror_packages)), length(master_packages))>, <lang sprintf("%d/%d", length(setdiff(mirror_packages, master_packages)), length(mirror_packages))>);
      goto L0(r14);
    };
    r42 = dyn if_ok(p7, p16);
    check L12() else D9();
  D9():
    deopt 29 [r42];
  L12():
    if_ok1 = ldf if_ok;
    check L13() else D10();
  D10():
    deopt 32 [];
  L13():
    p17 = prom<V +>{
      mirror_ts1 = ld mirror_ts1;
      mirror_ts2 = force? mirror_ts1;
      checkMissing(mirror_ts2);
      return mirror_ts2;
    };
    p20 = prom<V +>{
      difftime = ldf difftime;
      p18 = prom<V +>{
        master_ts1 = ld master_ts1;
        master_ts2 = force? master_ts1;
        checkMissing(master_ts2);
        return master_ts2;
      };
      p19 = prom<V +>{
        mirror_ts3 = ld mirror_ts1;
        mirror_ts4 = force? mirror_ts3;
        checkMissing(mirror_ts4);
        return mirror_ts4;
      };
      r46 = dyn difftime(p18, p19);
      return r46;
    };
    r48 = dyn if_ok1(p17, p20);
    check L14() else D11();
  D11():
    deopt 35 [r48];
  L14():
    if_ok2 = ldf if_ok;
    check L15() else D12();
  D12():
    deopt 38 [];
  L15():
    p21 = prom<V +>{
      mirror_ts5 = ld mirror_ts2;
      mirror_ts6 = force? mirror_ts5;
      checkMissing(mirror_ts6);
      return mirror_ts6;
    };
    p24 = prom<V +>{
      difftime1 = ldf difftime;
      p22 = prom<V +>{
        master_ts3 = ld master_ts2;
        master_ts4 = force? master_ts3;
        checkMissing(master_ts4);
        return master_ts4;
      };
      p23 = prom<V +>{
        mirror_ts7 = ld mirror_ts2;
        mirror_ts8 = force? mirror_ts7;
        checkMissing(mirror_ts8);
        return mirror_ts8;
      };
      r52 = dyn difftime1(p22, p23);
      return r52;
    };
    r54 = dyn if_ok2(p21, p24);
    check L16() else D13();
  D13():
    deopt 41 [r54];
  L16():
    if_ok3 = ldf if_ok;
    check L17() else D14();
  D14():
    deopt 44 [];
  L17():
    p25 = prom<V +>{
      mirror_ts9 = ld mirror_ts3;
      mirror_ts10 = force? mirror_ts9;
      checkMissing(mirror_ts10);
      return mirror_ts10;
    };
    p28 = prom<V +>{
      difftime2 = ldf difftime;
      p26 = prom<V +>{
        master_ts5 = ld master_ts3;
        master_ts6 = force? master_ts5;
        checkMissing(master_ts6);
        return master_ts6;
      };
      p27 = prom<V +>{
        mirror_ts11 = ld mirror_ts3;
        mirror_ts12 = force? mirror_ts11;
        checkMissing(mirror_ts12);
        return mirror_ts12;
      };
      r58 = dyn difftime2(p26, p27);
      return r58;
    };
    r60 = dyn if_ok3(p25, p28);
    check L18() else D15();
  D15():
    deopt 47 [r60];
  L18():
    list = ldf list in base;
    r61 = dyn list(r42, r48, r54, r60);
    check L19() else D16();
  D16():
    deopt 50 [r61];
  L19():
    goto L0(r61);
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg m1:*, reg m2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg suppressWarnings:cls, reg tryCatch:cls, reg check_mirror:cls, reg m3:*, reg m4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg identity:*, reg identity1:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V |
    mkenv;
    st m = m;
    verbose = ld verbose;
    check L2() else D0();
  D0():
    deopt 0 [verbose];
  L2():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    suppressWarnings = ldf suppressWarnings;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        m1 = ld m;
        m2 = force? m1;
        checkMissing(m2);
        return m2;
      };
      r1 = dyn sprintf("Checking %s", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L5() else D2();
  L7():
    p5 = prom<V +>{
      tryCatch = ldf tryCatch;
      p3 = prom<V +>{
        check_mirror = ldf check_mirror;
        p2 = prom<V +>{
          m3 = ld m;
          m4 = force? m3;
          checkMissing(m4);
          return m4;
        };
        r6 = dyn check_mirror(p2);
        return r6;
      };
      p4 = prom<V +>{
        identity = ld identity;
        identity1 = force? identity;
        checkMissing(identity1);
        return identity1;
      };
      r9 = dyn tryCatch[, error](p3, p4);
      return r9;
    };
    r11 = dyn suppressWarnings(p5);
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 11 [r11];
  L5():
    goto L1();
  L8():
    popenv;
    return r11;
  }
}