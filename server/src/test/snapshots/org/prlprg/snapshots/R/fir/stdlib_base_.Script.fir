fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3971500816;
    st `.Script` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3971500816(interpreter, script, args, `...`) {
  (reg interpreter:*, reg script:*, reg args:*, reg ddd:dots) -+> V { var interpreter:*, var script:*, var args:*, var `...`:dots?, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg c1:L, reg paste:cls, reg shQuote:cls, reg file_path:cls, reg R_home:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg file_path1:cls, reg interpreter1:*, reg interpreter2:V, reg p3:p(V +), reg script1:*, reg script2:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg args1:*, reg args2:V, reg p6:p(V +), reg r13:V, reg system:cls, reg cmd:*, reg cmd1:V, reg p7:p(V +), reg r15:V, reg system1:cls, reg paste1:cls, reg shQuote1:cls, reg file_path2:cls, reg R_home1:cls, reg r16:V, reg p8:p(V +), reg r18:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg interpreter3:*, reg interpreter4:V, reg p11:p(V +), reg shQuote2:cls, reg file_path3:cls, reg R_home2:cls, reg r23:V, reg p12:p(V +), reg interpreter5:*, reg interpreter6:V, reg p13:p(V +), reg script3:*, reg script4:V, reg p14:p(V +), reg r27:V, reg p15:p(V +), reg r29:V, reg p16:p(V +), reg args3:*, reg args4:V, reg p17:p(V +), reg r32:V, reg p18:p(V +), reg ddd1:dots?, reg r34:V |
    mkenv;
    st interpreter = interpreter;
    st script = script;
    st args = args;
    st `...` = ddd;
    _Platform = ld `.Platform`;
    check L1() else D0();
  D0():
    deopt 0 [_Platform];
  L1():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L3() else L4(_Platform1);
  L2(dx1):
    r1 = `==`(dx1, "windows");
    c1 = `as.logical`(r1);
    if c1 then L6() else L0();
  L3():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(_Platform3):
    r = `$`(_Platform3, <sym OS.type>);
    goto L2(r);
  L0():
    system1 = ldf system;
    check L12() else D5();
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    paste = ldf paste;
    check L7() else D1();
  D1():
    deopt 6 [];
  D5():
    deopt 19 [];
  L7():
    p2 = prom<V +>{
      shQuote = ldf shQuote;
      p1 = prom<V +>{
        file_path = ldf `file.path`;
        p = prom<V +>{
          R_home = ldf `R.home`;
          r2 = dyn R_home("bin");
          return r2;
        };
        r4 = dyn file_path(p, "Rcmd");
        return r4;
      };
      r6 = dyn shQuote(p1);
      return r6;
    };
    p5 = prom<V +>{
      file_path1 = ldf `file.path`;
      p3 = prom<V +>{
        interpreter1 = ld interpreter;
        interpreter2 = force? interpreter1;
        checkMissing(interpreter2);
        return interpreter2;
      };
      p4 = prom<V +>{
        script1 = ld script;
        script2 = force? script1;
        checkMissing(script2);
        return script2;
      };
      r10 = dyn file_path1("..", "share", p3, p4);
      return r10;
    };
    p6 = prom<V +>{
      args1 = ld args;
      args2 = force? args1;
      checkMissing(args2);
      return args2;
    };
    r13 = dyn paste(p2, p5, p6);
    check L8() else D2();
  L12():
    p18 = prom<V +>{
      paste1 = ldf paste;
      p10 = prom<V +>{
        shQuote1 = ldf shQuote;
        p9 = prom<V +>{
          file_path2 = ldf `file.path`;
          p8 = prom<V +>{
            R_home1 = ldf `R.home`;
            r16 = dyn R_home1("bin");
            return r16;
          };
          r18 = dyn file_path2(p8, "Rcmd");
          return r18;
        };
        r20 = dyn shQuote1(p9);
        return r20;
      };
      p11 = prom<V +>{
        interpreter3 = ld interpreter;
        interpreter4 = force? interpreter3;
        checkMissing(interpreter4);
        return interpreter4;
      };
      p16 = prom<V +>{
        shQuote2 = ldf shQuote;
        p15 = prom<V +>{
          file_path3 = ldf `file.path`;
          p12 = prom<V +>{
            R_home2 = ldf `R.home`;
            r23 = dyn R_home2("share");
            return r23;
          };
          p13 = prom<V +>{
            interpreter5 = ld interpreter;
            interpreter6 = force? interpreter5;
            checkMissing(interpreter6);
            return interpreter6;
          };
          p14 = prom<V +>{
            script3 = ld script;
            script4 = force? script3;
            checkMissing(script4);
            return script4;
          };
          r27 = dyn file_path3(p12, p13, p14);
          return r27;
        };
        r29 = dyn shQuote2(p15);
        return r29;
      };
      p17 = prom<V +>{
        args3 = ld args;
        args4 = force? args3;
        checkMissing(args4);
        return args4;
      };
      r32 = dyn paste1(p10, p11, p16, p17);
      return r32;
    };
    ddd1 = ld `...`;
    r34 = dyn system1[, `...`](p18, ddd1);
    check L13() else D6();
  D2():
    deopt 10 [r13];
  D6():
    deopt 22 [r34];
  L8():
    st cmd = r13;
    system = ldf system;
    check L9() else D3();
  L13():
    popenv;
    return r34;
  D3():
    deopt 13 [];
  L9():
    p7 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r15 = dyn system[, invisible](p7, TRUE);
    check L10() else D4();
  D4():
    deopt 17 [r15];
  L10():
    popenv;
    return r15;
  }
}