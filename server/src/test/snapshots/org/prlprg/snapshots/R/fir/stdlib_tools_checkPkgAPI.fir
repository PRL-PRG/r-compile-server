fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2446822598;
    st checkPkgAPI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2446822598(pkg, `lib.loc`, all) {
  (reg pkg:*, reg lib_loc:*, reg all:*) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, reg system_file:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r2:V, reg Sys_glob:cls, reg file_path:cls, reg libdir:*, reg libdir1:V, reg p2:p(V +), reg sprintf:cls, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg libs:*, reg libs1:V, reg length:cls, reg r13:V, reg r14:V, reg c1:L, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p6:p(V +), reg lapply:cls, reg libs2:*, reg libs3:V, reg p7:p(V +), reg checkLibAPI:*, reg checkLibAPI1:V, reg p8:p(V +), reg r18:V, reg p9:p(V +), reg r20:V, reg all1:*, reg all2:V, reg r21:V, reg c2:L, reg val:*, reg val1:V, reg c3:L, reg val3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg val7:*, reg val8:V, reg c4:L, reg val11:V, reg val12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg val14:V, reg dx5:V, reg r24:V, reg is_na:cls, reg r25:V, reg __:cls, reg r26:V, reg unique:cls, reg val15:*, reg val16:V, reg p10:p(V +), reg r28:V, reg l:*, reg rownames__:cls, reg r29:V, reg val17:*, reg val18:V |
    mkenv;
    st pkg = pkg;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L1(FALSE) else L1(all);
  L1(all_orDefault):
    st all = all_orDefault;
    system_file = ldf `system.file`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r2 = dyn system_file[, package, `lib.loc`]("libs", p, p1);
    check L9() else D1();
  D1():
    deopt 7 [r2];
  L9():
    st libdir = r2;
    Sys_glob = ldf `Sys.glob`;
    check L10() else D2();
  D2():
    deopt 10 [];
  L10():
    p5 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        libdir = ld libdir;
        libdir1 = force? libdir;
        checkMissing(libdir1);
        return libdir1;
      };
      p4 = prom<V +>{
        sprintf = ldf sprintf;
        p3 = prom<V +>{
          _Platform = ld `.Platform`;
          _Platform1 = force? _Platform;
          checkMissing(_Platform1);
          c = `is.object`(_Platform1);
          if c then L1() else L2(_Platform1);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("$", _Platform1);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(_Platform3):
          r4 = `$`(_Platform3, <sym dynlib.ext>);
          goto L0(r4);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r6 = dyn sprintf("*%s", p3);
        return r6;
      };
      r8 = dyn file_path(p2, p4);
      return r8;
    };
    r10 = dyn Sys_glob(p5);
    check L11() else D3();
  D3():
    deopt 12 [r10];
  L11():
    st libs = r10;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r12):
    r14 = `>`(r12, 0.0);
    c1 = `as.logical`(r14);
    if c1 then L16() else L3();
  L12():
    libs = ld libs;
    check L14() else D4();
  L13():
    r11 = dyn base(<sym libs>);
    goto L2(r11);
  D4():
    deopt 16 [libs];
  L3():
    popenv;
    return NULL;
  L14():
    libs1 = force? libs;
    checkMissing(libs1);
    length = ldf length in base;
    r13 = dyn length(libs1);
    check L15() else D5();
  L16():
    do_call = ldf `do.call`;
    check L17() else D6();
  D5():
    deopt 19 [r13];
  D6():
    deopt 23 [];
  L15():
    goto L2(r13);
  L17():
    p6 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p9 = prom<V +>{
      lapply = ldf lapply;
      p7 = prom<V +>{
        libs2 = ld libs;
        libs3 = force? libs2;
        checkMissing(libs3);
        return libs3;
      };
      p8 = prom<V +>{
        checkLibAPI = ld checkLibAPI;
        checkLibAPI1 = force? checkLibAPI;
        checkMissing(checkLibAPI1);
        return checkLibAPI1;
      };
      r18 = dyn lapply(p7, p8);
      return r18;
    };
    r20 = dyn do_call(p6, p9);
    check L18() else D7();
  D7():
    deopt 26 [r20];
  L18():
    st val = r20;
    all1 = ld all;
    check L19() else D8();
  D8():
    deopt 28 [all1];
  L19():
    all2 = force? all1;
    checkMissing(all2);
    r21 = `!`(all2);
    c2 = `as.logical`(r21);
    if c2 then L20() else L4();
  L4():
    goto L7();
  L7():
    unique = ldf unique;
    check L34() else D12();
  L20():
    val = ld val;
    check L21() else D9();
  D9():
    deopt 31 [val];
  D12():
    deopt 47 [];
  L21():
    val1 = force? val;
    checkMissing(val1);
    c3 = `is.object`(val1);
    if c3 then L22() else L23(val1);
  L34():
    p10 = prom<V +>{
      val15 = ld val;
      val16 = force? val15;
      checkMissing(val16);
      return val16;
    };
    r28 = dyn unique(p10);
    check L35() else D13();
  D13():
    deopt 49 [r28];
  L5(dx3):
    st val = dx3;
    goto L7();
  L22():
    dr2 = tryDispatchBuiltin.1("[", val1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(val3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L35():
    st val = r28;
    l = ld val;
    rownames__ = ldf `rownames<-`;
    check L36() else D14();
  D14():
    deopt 54 [NULL, l, NULL];
  L6(r23):
    __ = ldf `[` in base;
    r26 = dyn __(val1, r23, <missing>);
    goto L5(r26);
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L25():
    val7 = ld val;
    check L27() else D10();
  L26():
    r22 = dyn base1(<lang `$`(val, apitype)>);
    goto L6(r22);
  L36():
    r29 = dyn rownames__(l, NULL, NULL);
    check L37() else D15();
  D10():
    deopt 35 [val3, val7];
  D15():
    deopt 56 [NULL, r29];
  L27():
    val8 = force? val7;
    checkMissing(val8);
    c4 = `is.object`(val8);
    if c4 then L29() else L30(val3, val8);
  L37():
    st val = r29;
    val17 = ld val;
    check L38() else D16();
  D16():
    deopt 58 [val17];
  L28(val14, dx5):
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(dx5);
    check L32() else D11();
  L29():
    dr4 = tryDispatchBuiltin.1("$", val8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(val3, dr4);
  L30(val11, val12):
    r24 = `$`(val12, <sym apitype>);
    goto L28(val11, r24);
  L38():
    val18 = force? val17;
    checkMissing(val18);
    popenv;
    return val18;
  D11():
    deopt 39 [val14, r25];
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(val3, dx4);
  L32():
    goto L6(r25);
  }
}