fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3040525129;
    st pkgRsyms = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3040525129(pkg, `lib.loc`) {
  (reg pkg:*, reg lib_loc:*) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg system_file:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r2:V, reg Sys_glob:cls, reg file_path:cls, reg libdir:*, reg libdir1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg libs:*, reg libs1:V, reg length:cls, reg r9:V, reg r10:V, reg c:L, reg rbind_list:cls, reg lapply:cls, reg libs2:*, reg libs3:V, reg p4:p(V +), reg ofile_syms:*, reg ofile_syms1:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg rep:cls, reg r18:V, reg l:*, reg c1:L, reg r20:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r23:V, reg l3:*, reg c2:L, reg r25:dots, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r28:V, reg merge:cls, reg val:*, reg val1:V, reg p7:p(V +), reg Rsyms:cls, reg r30:V, reg p8:p(V +), reg r32:V |
    mkenv;
    st pkg = pkg;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    system_file = ldf `system.file`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
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
    check L5() else D1();
  D1():
    deopt 7 [r2];
  L5():
    st libdir = r2;
    Sys_glob = ldf `Sys.glob`;
    check L6() else D2();
  D2():
    deopt 10 [];
  L6():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        libdir = ld libdir;
        libdir1 = force? libdir;
        checkMissing(libdir1);
        return libdir1;
      };
      r4 = dyn file_path(p2, "*.so");
      return r4;
    };
    r6 = dyn Sys_glob(p3);
    check L7() else D3();
  D3():
    deopt 12 [r6];
  L7():
    st libs = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r8):
    r10 = `>`(r8, 0.0);
    c = `as.logical`(r10);
    if c then L12() else L2();
  L8():
    libs = ld libs;
    check L10() else D4();
  L9():
    r7 = dyn base(<sym libs>);
    goto L1(r7);
  D4():
    deopt 16 [libs];
  L2():
    popenv;
    return NULL;
  L10():
    libs1 = force? libs;
    checkMissing(libs1);
    length = ldf length in base;
    r9 = dyn length(libs1);
    check L11() else D5();
  L12():
    rbind_list = ldf rbind_list;
    check L13() else D6();
  D5():
    deopt 19 [r9];
  D6():
    deopt 23 [];
  L11():
    goto L1(r9);
  L13():
    p6 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        libs2 = ld libs;
        libs3 = force? libs2;
        checkMissing(libs3);
        return libs3;
      };
      p5 = prom<V +>{
        ofile_syms = ld ofile_syms;
        ofile_syms1 = force? ofile_syms;
        checkMissing(ofile_syms1);
        return ofile_syms1;
      };
      r13 = dyn lapply[, , keep](p4, p5, "U");
      return r13;
    };
    r15 = dyn rbind_list(p6);
    check L14() else D7();
  D7():
    deopt 25 [r15];
  L14():
    st val = r15;
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r17):
    l = ld val;
    c1 = `is.object`(l);
    if c1 then L18() else L19(r17, l);
  L15():
    rep = ldf rep in base;
    r18 = dyn rep(<sym pkg>, <lang nrow(val)>);
    goto L3(r18);
  L16():
    r16 = dyn base1(<sym pkg>, <lang nrow(val)>);
    goto L3(r16);
  L17(dx1):
    st val = dx1;
    l3 = ld val;
    c2 = `is.object`(l3);
    if c2 then L22() else L23(NULL, l3);
  L18():
    dr = tryDispatchBuiltin.0("$<-", l, r17);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(r17, dr);
  L19(r20, l2):
    r23 = `$<-`(l2, <sym package>, r17);
    goto L17(r23);
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L21(dx3):
    st val = dx3;
    merge = ldf merge;
    check L25() else D8();
  L22():
    dr2 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(NULL, dr2);
  L23(r25, l5):
    r28 = `$<-`(l5, <sym type>, NULL);
    goto L21(r28);
  D8():
    deopt 39 [];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx2);
  L25():
    p7 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    p8 = prom<V +>{
      Rsyms = ldf Rsyms;
      r30 = dyn Rsyms();
      return r30;
    };
    r32 = dyn merge(p7, p8);
    check L26() else D9();
  D9():
    deopt 42 [r32];
  L26():
    popenv;
    return r32;
  }
}