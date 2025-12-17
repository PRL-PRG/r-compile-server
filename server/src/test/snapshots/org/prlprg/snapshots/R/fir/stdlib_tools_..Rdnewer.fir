fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2558571330;
    st `..Rdnewer` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2558571330(dir, file, OS) {
  (reg dir:*, reg file:*, reg OS:*) -+> V { var dir:*, var file:*, var OS:*, reg OS_isMissing:L, reg OS_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg file_exists:cls, reg file1:*, reg file2:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c1:L, reg file_mtime:cls, reg file3:*, reg file4:V, reg p2:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg file_mtime1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg Sys_glob:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V, reg Sys_glob1:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg c2:cls, reg r21:V, reg p7:p(V +), reg r23:V, reg age:*, reg age1:V, reg r24:V, reg any:cls, reg r25:V, reg c3:L, reg dir_exists:cls, reg file_path2:cls, reg dir5:*, reg dir6:V, reg p8:p(V +), reg OS1:*, reg OS2:V, reg p9:p(V +), reg r30:V, reg p10:p(V +), reg r32:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg file_mtime2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg Sys_glob2:cls, reg file_path3:cls, reg dir7:*, reg dir8:V, reg p11:p(V +), reg OS3:*, reg OS4:V, reg p12:p(V +), reg r39:V, reg p13:p(V +), reg r41:V, reg Sys_glob3:cls, reg file_path4:cls, reg dir9:*, reg dir10:V, reg p14:p(V +), reg OS5:*, reg OS6:V, reg p15:p(V +), reg r44:V, reg p16:p(V +), reg r46:V, reg c5:cls, reg r47:V, reg p17:p(V +), reg r49:V, reg age2:*, reg age3:V, reg r50:V, reg any1:cls, reg r51:V, reg c6:L |
    mkenv;
    st dir = dir;
    st file = file;
    OS_isMissing = missing.0(OS);
    if OS_isMissing then L0() else L1(OS);
  L0():
    p = prom<V +>{
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
      r = `$`(_Platform3, <sym OS.type>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(OS_orDefault):
    st OS = OS_orDefault;
    file_exists = ldf `file.exists`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p1 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r3 = dyn file_exists(p1);
    check L13() else D1();
  D1():
    deopt 3 [r3];
  L13():
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L14() else L2();
  L2():
    file_mtime = ldf `file.mtime`;
    check L17() else D2();
  L14():
    popenv;
    return 0;
  D2():
    deopt 11 [];
  L17():
    p2 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r8 = dyn file_mtime(p2);
    check L18() else D3();
  D3():
    deopt 13 [r8];
  L18():
    st age = r8;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L4(r10):
    c3 = `as.logical`(r10);
    if c3 then L25() else L5();
  L19():
    file_mtime1 = ldf `file.mtime`;
    check L21() else D4();
  L20():
    r9 = dyn base(<lang `>`(file.mtime(c(Sys.glob(file.path(dir, "man", "*.Rd")), Sys.glob(file.path(dir, "man", "*.rd")))), age)>);
    goto L4(r9);
  D4():
    deopt 18 [];
  L5():
    dir_exists = ldf `dir.exists`;
    check L28() else D8();
  L21():
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      Sys_glob = ldf `Sys.glob`;
      p4 = prom<V +>{
        file_path = ldf `file.path`;
        p3 = prom<V +>{
          dir1 = ld dir;
          dir2 = force? dir1;
          checkMissing(dir2);
          return dir2;
        };
        r14 = dyn file_path(p3, "man", "*.Rd");
        return r14;
      };
      r16 = dyn Sys_glob(p4);
      Sys_glob1 = ldf `Sys.glob`;
      p6 = prom<V +>{
        file_path1 = ldf `file.path`;
        p5 = prom<V +>{
          dir3 = ld dir;
          dir4 = force? dir3;
          checkMissing(dir4);
          return dir4;
        };
        r18 = dyn file_path1(p5, "man", "*.rd");
        return r18;
      };
      r20 = dyn Sys_glob1(p6);
      c2 = ldf c in base;
      r21 = dyn c2(r16, r20);
      goto L0(r21);
    L2():
      r11 = dyn base1(<lang Sys.glob(file.path(dir, "man", "*.Rd"))>, <lang Sys.glob(file.path(dir, "man", "*.rd"))>);
      goto L0(r11);
    };
    r23 = dyn file_mtime1(p7);
    check L22() else D5();
  L25():
    popenv;
    return 0;
  D5():
    deopt 20 [r23];
  D8():
    deopt 31 [];
  L22():
    age = ld age;
    check L23() else D6();
  L28():
    p10 = prom<V +>{
      file_path2 = ldf `file.path`;
      p8 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      p9 = prom<V +>{
        OS1 = ld OS;
        OS2 = force? OS1;
        checkMissing(OS2);
        return OS2;
      };
      r30 = dyn file_path2(p8, p9);
      return r30;
    };
    r32 = dyn dir_exists(p10);
    check L29() else D9();
  D6():
    deopt 20 [r23, age];
  D9():
    deopt 33 [r32];
  L23():
    age1 = force? age;
    checkMissing(age1);
    r24 = `>`(r23, age1);
    any = ldf any in base;
    r25 = dyn any(r24);
    check L24() else D7();
  L29():
    c4 = `as.logical`(r32);
    if c4 then L30() else L7();
  D7():
    deopt 24 [r25];
  L7():
    goto L11();
  L11():
    popenv;
    return 1;
  L24():
    goto L4(r25);
  L30():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L8(r34):
    c6 = `as.logical`(r34);
    if c6 then L37() else L9();
  L31():
    file_mtime2 = ldf `file.mtime`;
    check L33() else D10();
  L32():
    r33 = dyn base2(<lang `>`(file.mtime(c(Sys.glob(file.path(dir, "man", OS, "*.Rd")), Sys.glob(file.path(dir, "man", OS, "*.rd")))), age)>);
    goto L8(r33);
  D10():
    deopt 37 [];
  L9():
    goto L11();
  L33():
    p17 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      Sys_glob2 = ldf `Sys.glob`;
      p13 = prom<V +>{
        file_path3 = ldf `file.path`;
        p11 = prom<V +>{
          dir7 = ld dir;
          dir8 = force? dir7;
          checkMissing(dir8);
          return dir8;
        };
        p12 = prom<V +>{
          OS3 = ld OS;
          OS4 = force? OS3;
          checkMissing(OS4);
          return OS4;
        };
        r39 = dyn file_path3(p11, "man", p12, "*.Rd");
        return r39;
      };
      r41 = dyn Sys_glob2(p13);
      Sys_glob3 = ldf `Sys.glob`;
      p16 = prom<V +>{
        file_path4 = ldf `file.path`;
        p14 = prom<V +>{
          dir9 = ld dir;
          dir10 = force? dir9;
          checkMissing(dir10);
          return dir10;
        };
        p15 = prom<V +>{
          OS5 = ld OS;
          OS6 = force? OS5;
          checkMissing(OS6);
          return OS6;
        };
        r44 = dyn file_path4(p14, "man", p15, "*.rd");
        return r44;
      };
      r46 = dyn Sys_glob3(p16);
      c5 = ldf c in base;
      r47 = dyn c5(r41, r46);
      goto L0(r47);
    L2():
      r35 = dyn base3(<lang Sys.glob(file.path(dir, "man", OS, "*.Rd"))>, <lang Sys.glob(file.path(dir, "man", OS, "*.rd"))>);
      goto L0(r35);
    };
    r49 = dyn file_mtime2(p17);
    check L34() else D11();
  L37():
    popenv;
    return 0;
  D11():
    deopt 39 [r49];
  L34():
    age2 = ld age;
    check L35() else D12();
  D12():
    deopt 39 [r49, age2];
  L35():
    age3 = force? age2;
    checkMissing(age3);
    r50 = `>`(r49, age3);
    any1 = ldf any in base;
    r51 = dyn any1(r50);
    check L36() else D13();
  D13():
    deopt 43 [r51];
  L36():
    goto L8(r51);
  }
}