fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_mirror_mirmon_status = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg r3:cls, reg r4:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg Map:cls, reg r11:cls, reg p1:p(V +), reg state_files:*, reg state_files1:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg state_files2:*, reg state_files3:V, reg names:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg list:cls, reg r21:V, reg c2:cls, reg r22:V, reg p4:p(V +), reg r24:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st fields = r1;
    r3 = clos inner3832801503;
    st ts_to_POSIXct = r3;
    r4 = clos inner1019204350;
    st read_mirmon_state_file = r4;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r2 = dyn c("url", "age", "status_last_probe", "time_last_successful_probe", "probe_history", "state_history", "last_probe");
    check L4() else D0();
  L3():
    r = dyn base("url", "age", "status_last_probe", "time_last_successful_probe", "probe_history", "state_history", "last_probe");
    goto L0(r);
  D0():
    deopt 10 [r2];
  L1(r6):
    st state_files = r6;
    do_call = ldf `do.call`;
    check L8() else D2();
  L4():
    goto L0(r2);
  L5():
    c1 = ldf c in base;
    r7 = dyn c1("mirror.state", "mirror_release.state", "mirror_old_release.state");
    check L7() else D1();
  L6():
    r5 = dyn base1[TIME, `TIME_r-release`, `TIME_r-old-release`]("mirror.state", "mirror_release.state", "mirror_old_release.state");
    goto L1(r5);
  D1():
    deopt 27 [r7];
  D2():
    deopt 30 [];
  L7():
    goto L1(r7);
  L8():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r10):
      return r10;
    L2():
      Map = ldf Map;
      p1 = prom<V +>{
        r11 = clos inner4198313549;
        return r11;
      };
      p2 = prom<V +>{
        state_files = ld state_files;
        state_files1 = force? state_files;
        checkMissing(state_files1);
        return state_files1;
      };
      p3 = prom<V +>{
        sym3 = ldf names;
        base3 = ldf names in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r15):
        return r15;
      L1():
        state_files2 = ld state_files;
        state_files3 = force? state_files2;
        checkMissing(state_files3);
        names = ldf names in base;
        r16 = dyn names(state_files3);
        goto L0(r16);
      L2():
        r14 = dyn base3(<sym state_files>);
        goto L0(r14);
      };
      r18 = dyn Map(p1, p2, p3);
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r9 = dyn base2(<lang Map(function((u=, v=), {
            `<-`(u, paste0("https://cran.r-project.org/mirmon/state/", u));
            cbind(read_mirmon_state_file(u), timestamp=v, stringsAsFactors=FALSE)
          }, NULL), state_files, names(state_files))>, <lang list(make.row.names=FALSE)>);
      goto L0(r9);
    L1(r20):
      c2 = ldf c in base;
      r22 = dyn c2(r18, r20);
      goto L0(r22);
    L4():
      list = ldf list in base;
      r21 = dyn list(FALSE);
      goto L1(r21);
    L5():
      r19 = dyn base4[`make.row.names`](FALSE);
      goto L1(r19);
    };
    r24 = dyn do_call(p, p4);
    check L9() else D3();
  D3():
    deopt 33 [r24];
  L9():
    popenv;
    return r24;
  }
}
fun inner3832801503(ts) {
  (reg ts:*) -+> V { var ts:*, reg suppressWarnings:cls, reg as_POSIXct:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg ts1:*, reg ts2:V, reg as_character:cls, reg r4:V, reg as_numeric:cls, reg r5:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V |
    mkenv;
    st ts = ts;
    suppressWarnings = ldf suppressWarnings;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_POSIXct = ldf `as.POSIXct`;
      p = prom<V +>{
        sym = ldf `as.numeric`;
        base = ldf `as.numeric` in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r1):
        return r1;
      L2():
        sym1 = ldf `as.character`;
        base1 = ldf `as.character` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L4() else L5();
      L3():
        r = dyn base(<lang as.character(ts)>);
        goto L0(r);
      L1(r3):
        as_numeric = ldf `as.numeric` in base;
        r5 = dyn as_numeric(r3);
        goto L0(r5);
      L4():
        ts1 = ld ts;
        ts2 = force? ts1;
        checkMissing(ts2);
        as_character = ldf `as.character` in base;
        r4 = dyn as_character(ts2);
        goto L1(r4);
      L5():
        r2 = dyn base1(<sym ts>);
        goto L1(r2);
      };
      r7 = dyn as_POSIXct[, origin](p, "1970-01-01");
      return r7;
    };
    r9 = dyn suppressWarnings(p1);
    check L1() else D1();
  D1():
    deopt 3 [r9];
  L1():
    popenv;
    return r9;
  }
}
fun inner1019204350(con) {
  (reg con:*) -+> V { var con:*, reg __:cls, reg r:V, reg r1:cls, reg con1:*, reg con2:V, reg p:p(V +), reg fields:*, reg fields1:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg db:*, reg db1:V, reg c:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg as_character:cls, reg r8:V, reg l:*, reg c1:L, reg r10:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg ts_to_POSIXct:cls, reg db4:*, reg db5:V, reg c2:L, reg db7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r14:V, reg p2:p(V +), reg r16:V, reg l3:*, reg c3:L, reg r18:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r21:V, reg ts_to_POSIXct1:cls, reg db8:*, reg db9:V, reg c4:L, reg db11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r22:V, reg p3:p(V +), reg r24:V, reg l6:*, reg c5:L, reg r26:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r29:V, reg ts_to_POSIXct2:cls, reg db12:*, reg db13:V, reg c6:L, reg db15:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r30:V, reg p4:p(V +), reg r32:V, reg l9:*, reg c7:L, reg r34:V, reg l11:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r37:V, reg difftime:cls, reg Sys_time:cls, reg r38:V, reg p5:p(V +), reg db16:*, reg db17:V, reg c8:L, reg db19:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r40:V, reg p6:p(V +), reg r42:V, reg l12:*, reg c9:L, reg r44:V, reg l14:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r47:V, reg db20:*, reg db21:V |
    mkenv;
    st con = con;
    __ = ldf `::`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn __("utils", "read.table");
    check L2() else D1();
  D1():
    deopt 4 [r];
  L2():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    p1 = prom<V +>{
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      return fields1;
    };
    r4 = dyn r1[, header, `col.names`](p, FALSE, p1);
    check L3() else D2();
  D2():
    deopt 11 [r4];
  L3():
    st db = r4;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r6):
    l = ld db;
    c1 = `is.object`(l);
    if c1 then L13() else L14(r6, l);
  L4():
    db = ld db;
    check L6() else D3();
  L5():
    r5 = dyn base(<lang `$`(db, url)>);
    goto L0(r5);
  D3():
    deopt 15 [db];
  L6():
    db1 = force? db;
    checkMissing(db1);
    c = `is.object`(db1);
    if c then L8() else L9(db1);
  L12(dx3):
    st db = dx3;
    ts_to_POSIXct = ldf ts_to_POSIXct;
    check L16() else D5();
  L13():
    dr2 = tryDispatchBuiltin.0("$<-", l, r6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(r6, dr2);
  L14(r10, l2):
    r13 = `$<-`(l2, <sym url>, r6);
    goto L12(r13);
  D5():
    deopt 24 [];
  L7(dx1):
    as_character = ldf `as.character` in base;
    r8 = dyn as_character(dx1);
    check L11() else D4();
  L8():
    dr = tryDispatchBuiltin.1("$", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(db3):
    r7 = `$`(db3, <sym url>);
    goto L7(r7);
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16():
    p2 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      c2 = `is.object`(db5);
      if c2 then L1() else L2(db5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", db5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(db7):
      r14 = `$`(db7, <sym age>);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r16 = dyn ts_to_POSIXct(p2);
    check L17() else D6();
  D4():
    deopt 19 [r8];
  D6():
    deopt 26 [r16];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    goto L0(r8);
  L17():
    l3 = ld db;
    c3 = `is.object`(l3);
    if c3 then L19() else L20(r16, l3);
  L18(dx7):
    st db = dx7;
    ts_to_POSIXct1 = ldf ts_to_POSIXct;
    check L22() else D7();
  L19():
    dr6 = tryDispatchBuiltin.0("$<-", l3, r16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L21() else L20(r16, dr6);
  L20(r18, l5):
    r21 = `$<-`(l5, <sym age>, r16);
    goto L18(r21);
  D7():
    deopt 31 [];
  L21():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(dx6);
  L22():
    p3 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      c4 = `is.object`(db9);
      if c4 then L1() else L2(db9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", db9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(db11):
      r22 = `$`(db11, <sym time_last_successful_probe>);
      goto L0(r22);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r24 = dyn ts_to_POSIXct1(p3);
    check L23() else D8();
  D8():
    deopt 33 [r24];
  L23():
    l6 = ld db;
    c5 = `is.object`(l6);
    if c5 then L25() else L26(r24, l6);
  L24(dx11):
    st db = dx11;
    ts_to_POSIXct2 = ldf ts_to_POSIXct;
    check L28() else D9();
  L25():
    dr10 = tryDispatchBuiltin.0("$<-", l6, r24);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L27() else L26(r24, dr10);
  L26(r26, l8):
    r29 = `$<-`(l8, <sym time_last_successful_probe>, r24);
    goto L24(r29);
  D9():
    deopt 38 [];
  L27():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L24(dx10);
  L28():
    p4 = prom<V +>{
      db12 = ld db;
      db13 = force? db12;
      checkMissing(db13);
      c6 = `is.object`(db13);
      if c6 then L1() else L2(db13);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", db13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(db15):
      r30 = `$`(db15, <sym last_probe>);
      goto L0(r30);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r32 = dyn ts_to_POSIXct2(p4);
    check L29() else D10();
  D10():
    deopt 40 [r32];
  L29():
    l9 = ld db;
    c7 = `is.object`(l9);
    if c7 then L31() else L32(r32, l9);
  L30(dx15):
    st db = dx15;
    difftime = ldf difftime;
    check L34() else D11();
  L31():
    dr14 = tryDispatchBuiltin.0("$<-", l9, r32);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L33() else L32(r32, dr14);
  L32(r34, l11):
    r37 = `$<-`(l11, <sym last_probe>, r32);
    goto L30(r37);
  D11():
    deopt 45 [];
  L33():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L30(dx14);
  L34():
    p5 = prom<V +>{
      Sys_time = ldf `Sys.time`;
      r38 = dyn Sys_time();
      return r38;
    };
    p6 = prom<V +>{
      db16 = ld db;
      db17 = force? db16;
      checkMissing(db17);
      c8 = `is.object`(db17);
      if c8 then L1() else L2(db17);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", db17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(db19):
      r40 = `$`(db19, <sym age>);
      goto L0(r40);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r42 = dyn difftime[, , units](p5, p6, "days");
    check L35() else D12();
  D12():
    deopt 50 [r42];
  L35():
    l12 = ld db;
    c9 = `is.object`(l12);
    if c9 then L37() else L38(r42, l12);
  L36(dx19):
    st db = dx19;
    db20 = ld db;
    check L40() else D13();
  L37():
    dr18 = tryDispatchBuiltin.0("$<-", l12, r42);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L39() else L38(r42, dr18);
  L38(r44, l14):
    r47 = `$<-`(l14, <sym delta>, r42);
    goto L36(r47);
  D13():
    deopt 54 [db20];
  L39():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L36(dx18);
  L40():
    db21 = force? db20;
    checkMissing(db21);
    popenv;
    return db21;
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg paste0:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r1:V, reg cbind:cls, reg read_mirmon_state_file:cls, reg u3:*, reg u4:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg v1:*, reg v2:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st u = u;
    st v = v;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    r1 = dyn paste0("https://cran.r-project.org/mirmon/state/", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    st u = r1;
    cbind = ldf cbind;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p2 = prom<V +>{
      read_mirmon_state_file = ldf read_mirmon_state_file;
      p1 = prom<V +>{
        u3 = ld u;
        u4 = force? u3;
        checkMissing(u4);
        return u4;
      };
      r3 = dyn read_mirmon_state_file(p1);
      return r3;
    };
    p3 = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    r6 = dyn cbind[, timestamp, stringsAsFactors](p2, p3, FALSE);
    check L3() else D3();
  D3():
    deopt 13 [r6];
  L3():
    popenv;
    return r6;
  }
}