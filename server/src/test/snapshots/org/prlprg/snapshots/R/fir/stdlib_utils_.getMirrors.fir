fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4043237454;
    st `.getMirrors` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4043237454(url, `local.file`, all, `local.only`) {
  (reg url:*, reg local_file:*, reg all:*, reg local_only:*) -+> V { var url:*, var `local.file`:*, var all:*, var `local.only`:*, reg local_only1:*, reg local_only2:V, reg r:V, reg c:L, reg tempfile:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg on_exit:cls, reg r4:V, reg tryCatch:cls, reg download_file:cls, reg url1:*, reg url2:V, reg p:p(V +), reg f:*, reg f1:V, reg p1:p(V +), reg r7:V, reg m:*, reg m1:V, reg r8:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg m2:*, reg m3:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg read_csv:cls, reg f2:*, reg f3:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:cls, reg p6:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg m4:*, reg m5:V, reg c2:V, reg c3:L, reg read_csv1:cls, reg local_file1:*, reg local_file2:V, reg p7:p(V +), reg r24:V, reg all1:*, reg all2:V, reg r26:V, reg c4:L, reg m6:*, reg m7:V, reg c5:L, reg m9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg m13:*, reg m14:V, reg c6:L, reg m17:V, reg m18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg m20:V, reg dx3:V, reg r29:V, reg as_logical:cls, reg r30:V, reg __:cls, reg r31:V, reg m21:*, reg m22:V |
    mkenv;
    st url = url;
    st `local.file` = local_file;
    st all = all;
    st `local.only` = local_only;
    st m = NULL;
    local_only1 = ld `local.only`;
    check L10() else D0();
  D0():
    deopt 3 [local_only1];
  L10():
    local_only2 = force? local_only1;
    checkMissing(local_only2);
    r = `!`(local_only2);
    c = `as.logical`(r);
    if c then L11() else L0();
  L0():
    goto L2();
  L2():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L11():
    tempfile = ldf tempfile;
    check L12() else D1();
  D1():
    deopt 7 [];
  L3(r22):
    c3 = `as.logical`(r22);
    if c3 then L22() else L4();
  L12():
    r1 = dyn tempfile();
    check L13() else D2();
  L19():
    m4 = ld m;
    check L21() else D5();
  L20():
    r21 = dyn base1(<sym m>);
    goto L3(r21);
  D2():
    deopt 8 [r1];
  D5():
    deopt 23 [m4];
  L4():
    goto L5();
  L5():
    all1 = ld all;
    check L26() else D8();
  L13():
    st f = r1;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L21():
    m5 = force? m4;
    checkMissing(m5);
    c2 = `==`(m5, NULL);
    goto L3(c2);
  L22():
    read_csv1 = ldf `read.csv`;
    check L23() else D6();
  D6():
    deopt 27 [];
  D8():
    deopt 37 [all1];
  L1():
    tryCatch = ldf tryCatch;
    check L16() else D3();
  L14():
    on_exit = ldf `on.exit` in base;
    r4 = dyn on_exit(<lang unlink(f)>);
    goto L1();
  L15():
    r2 = dyn base(<lang unlink(f)>);
    goto L1();
  L23():
    p7 = prom<V +>{
      local_file1 = ld `local.file`;
      local_file2 = force? local_file1;
      checkMissing(local_file2);
      return local_file2;
    };
    r24 = dyn read_csv1[, `as.is`, encoding](p7, TRUE, "UTF-8");
    check L24() else D7();
  L26():
    all2 = force? all1;
    checkMissing(all2);
    r26 = `!`(all2);
    c4 = `as.logical`(r26);
    if c4 then L27() else L6();
  D3():
    deopt 14 [];
  D7():
    deopt 33 [r24];
  L6():
    goto L9();
  L9():
    m21 = ld m;
    check L41() else D12();
  L16():
    p5 = prom<V +>{
      download_file = ldf `download.file`;
      p = prom<V +>{
        url1 = ld url;
        url2 = force? url1;
        checkMissing(url2);
        return url2;
      };
      p1 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r7 = dyn download_file[, destfile, quiet](p, p1, TRUE);
      st m = r7;
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      r8 = `!=`(m1, 0);
      c1 = `as.logical`(r8);
      if c1 then L2() else L0();
    L0():
      goto L1();
    L1():
      read_csv = ldf `read.csv`;
      p4 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r15 = dyn read_csv[, `as.is`, encoding](p4, TRUE, "UTF-8");
      return r15;
    L2():
      stop = ldf stop;
      p3 = prom<V +>{
        gettextf = ldf gettextf;
        p2 = prom<V +>{
          m2 = ld m;
          m3 = force? m2;
          checkMissing(m3);
          return m3;
        };
        r10 = dyn gettextf("'download.file()' error code '%d'", p2);
        return r10;
      };
      r12 = dyn stop(p3);
      goto L1();
    };
    p6 = prom<V +>{
      r17 = clos inner3206251937;
      return r17;
    };
    r19 = dyn tryCatch[, error](p5, p6);
    check L17() else D4();
  L24():
    st m = r24;
    goto L5();
  L27():
    m6 = ld m;
    check L28() else D9();
  D4():
    deopt 18 [r19];
  D9():
    deopt 40 [m6];
  D12():
    deopt 55 [m21];
  L17():
    st m = r19;
    goto L2();
  L28():
    m7 = force? m6;
    checkMissing(m7);
    c5 = `is.object`(m7);
    if c5 then L29() else L30(m7);
  L41():
    m22 = force? m21;
    checkMissing(m22);
    popenv;
    return m22;
  L7(dx1):
    st m = dx1;
    goto L9();
  L29():
    dr = tryDispatchBuiltin.1("[", m7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(m9):
    sym2 = ldf `as.logical`;
    base2 = ldf `as.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L8(r28):
    __ = ldf `[` in base;
    r31 = dyn __(m7, r28, <missing>);
    goto L7(r31);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L32():
    m13 = ld m;
    check L34() else D10();
  L33():
    r27 = dyn base2(<lang `$`(m, OK)>);
    goto L8(r27);
  D10():
    deopt 44 [m9, m13];
  L34():
    m14 = force? m13;
    checkMissing(m14);
    c6 = `is.object`(m14);
    if c6 then L36() else L37(m9, m14);
  L35(m20, dx3):
    as_logical = ldf `as.logical` in base;
    r30 = dyn as_logical(dx3);
    check L39() else D11();
  L36():
    dr2 = tryDispatchBuiltin.1("$", m14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(m9, dr2);
  L37(m17, m18):
    r29 = `$`(m18, <sym OK>);
    goto L35(m17, r29);
  D11():
    deopt 48 [m20, r30];
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(m9, dx2);
  L39():
    goto L8(r30);
  }
}
fun inner3206251937(err) {
  (reg err:*) -+> V { var err:*, reg warning:cls, reg gettextf:cls, reg conditionMessage:cls, reg err1:*, reg err2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg local_file:*, reg local_file1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st err = err;
    warning = ldf warning;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p = prom<V +>{
          err1 = ld err;
          err2 = force? err1;
          checkMissing(err2);
          return err2;
        };
        r1 = dyn conditionMessage(p);
        return r1;
      };
      p2 = prom<V +>{
        local_file = ld `local.file`;
        local_file1 = force? local_file;
        checkMissing(local_file1);
        return local_file1;
      };
      r4 = dyn gettextf("failed to download mirrors file (%s); using local file '%s'", p1, p2);
      return r4;
    };
    r6 = dyn warning[, `call.`, `immediate.`](p3, FALSE, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    popenv;
    return NULL;
  }
}