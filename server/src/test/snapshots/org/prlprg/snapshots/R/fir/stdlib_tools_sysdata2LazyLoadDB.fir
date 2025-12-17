fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2654599610;
    st sysdata2LazyLoadDB = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2654599610(srcFile, destDir, compress) {
  (reg srcFile:*, reg destDir:*, reg compress:*) -+> V { var srcFile:*, var destDir:*, var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, reg new_env:cls, reg r:V, reg load:cls, reg srcFile1:*, reg srcFile2:V, reg p:p(V +), reg e:*, reg e1:V, reg p1:p(V +), reg r3:V, reg makeLazyLoadDB:cls, reg e2:*, reg e3:V, reg p2:p(V +), reg file_path:cls, reg destDir1:*, reg destDir2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg compress1:*, reg compress2:V, reg p5:p(V +), reg r9:V |
    mkenv;
    st srcFile = srcFile;
    st destDir = destDir;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L0(TRUE) else L0(compress);
  L0(compress_orDefault):
    st compress = compress_orDefault;
    new_env = ldf `new.env`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn new_env[hash](TRUE);
    check L2() else D1();
  D1():
    deopt 4 [r];
  L2():
    st e = r;
    load = ldf load;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p = prom<V +>{
      srcFile1 = ld srcFile;
      srcFile2 = force? srcFile1;
      checkMissing(srcFile2);
      return srcFile2;
    };
    p1 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r3 = dyn load(p, p1);
    check L4() else D3();
  D3():
    deopt 10 [r3];
  L4():
    makeLazyLoadDB = ldf makeLazyLoadDB;
    check L5() else D4();
  D4():
    deopt 12 [];
  L5():
    p2 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    p4 = prom<V +>{
      file_path = ldf `file.path`;
      p3 = prom<V +>{
        destDir1 = ld destDir;
        destDir2 = force? destDir1;
        checkMissing(destDir2);
        return destDir2;
      };
      r6 = dyn file_path(p3, "sysdata");
      return r6;
    };
    p5 = prom<V +>{
      compress1 = ld compress;
      compress2 = force? compress1;
      checkMissing(compress2);
      return compress2;
    };
    r9 = dyn makeLazyLoadDB[, , compress](p2, p4, p5);
    check L6() else D5();
  D5():
    deopt 17 [r9];
  L6():
    popenv;
    return r9;
  }
}