fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_namespace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg tryCatch:cls, reg parseNamespaceFile:cls, reg basename:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg dirname:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:cls, reg p6:p(V +), reg r14:V, reg invisible:cls, reg r15:V |
    mkenv;
    st dir = dir;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st dir = r1;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r3):
    popenv;
    return r3;
  L3():
    tryCatch = ldf tryCatch;
    check L5() else D2();
  L4():
    r2 = dyn base(<lang tryCatch(parseNamespaceFile(basename(dir), dirname(dir)), error=function((e=), {
          writeLines("Invalid NAMESPACE file, parsing gives:");
          stop(e)
        }, NULL))>);
    goto L0(r2);
  D2():
    deopt 8 [];
  L5():
    p5 = prom<V +>{
      parseNamespaceFile = ldf parseNamespaceFile;
      p2 = prom<V +>{
        basename = ldf basename;
        p1 = prom<V +>{
          dir3 = ld dir;
          dir4 = force? dir3;
          checkMissing(dir4);
          return dir4;
        };
        r5 = dyn basename(p1);
        return r5;
      };
      p4 = prom<V +>{
        dirname = ldf dirname;
        p3 = prom<V +>{
          dir5 = ld dir;
          dir6 = force? dir5;
          checkMissing(dir6);
          return dir6;
        };
        r8 = dyn dirname(p3);
        return r8;
      };
      r10 = dyn parseNamespaceFile(p2, p4);
      return r10;
    };
    p6 = prom<V +>{
      r12 = clos inner3708401697;
      return r12;
    };
    r14 = dyn tryCatch[, error](p5, p6);
    check L6() else D3();
  D3():
    deopt 12 [r14];
  L6():
    invisible = ldf invisible in base;
    r15 = dyn invisible(r14);
    check L7() else D4();
  D4():
    deopt 14 [r15];
  L7():
    goto L0(r15);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg writeLines:cls, reg r:V, reg stop:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r2:V |
    mkenv;
    st e = e;
    writeLines = ldf writeLines;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn writeLines("Invalid NAMESPACE file, parsing gives:");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    stop = ldf stop;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r2 = dyn stop(p);
    check L3() else D3();
  D3():
    deopt 7 [r2];
  L3():
    popenv;
    return r2;
  }
}