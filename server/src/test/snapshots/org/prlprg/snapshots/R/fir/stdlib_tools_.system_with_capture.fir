fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2674643882;
    st `.system_with_capture` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2674643882(command, args, env, stdin, input, timeout) {
  (reg command:*, reg args:*, reg env:*, reg stdin:*, reg input:*, reg timeout:*) -+> V { var command:*, var args:*, reg args_isMissing:L, reg args_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var env:*, reg env_isMissing:L, reg env_orDefault:*, reg character1:cls, reg r2:V, reg p1:p(V +), var stdin:*, reg stdin_isMissing:L, reg stdin_orDefault:*, var input:*, reg input_isMissing:L, reg input_orDefault:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, reg tempfile:cls, reg r4:V, reg tempfile1:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg on_exit:cls, reg r8:V, reg system2:cls, reg command1:*, reg command2:V, reg p2:p(V +), reg args1:*, reg args2:V, reg p3:p(V +), reg env1:*, reg env2:V, reg p4:p(V +), reg outfile:*, reg outfile1:V, reg p5:p(V +), reg errfile:*, reg errfile1:V, reg p6:p(V +), reg stdin1:*, reg stdin2:V, reg p7:p(V +), reg input1:*, reg input2:V, reg p8:p(V +), reg timeout1:*, reg timeout2:V, reg p9:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg status:*, reg status1:V, reg readLines:cls, reg outfile2:*, reg outfile3:V, reg p10:p(V +), reg r21:V, reg readLines1:cls, reg errfile2:*, reg errfile3:V, reg p11:p(V +), reg r23:V, reg list:cls, reg r24:V |
    mkenv;
    st command = command;
    args_isMissing = missing.0(args);
    if args_isMissing then L0() else L1(args);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(args_orDefault):
    st args = args_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L2() else L3(env);
  L2():
    p1 = prom<V +>{
      character1 = ldf character;
      r2 = dyn character1();
      return r2;
    };
    goto L3(p1);
  L3(env_orDefault):
    st env = env_orDefault;
    stdin_isMissing = missing.0(stdin);
    if stdin_isMissing then L4("") else L4(stdin);
  L4(stdin_orDefault):
    st stdin = stdin_orDefault;
    input_isMissing = missing.0(input);
    if input_isMissing then L5(NULL) else L5(input);
  L5(input_orDefault):
    st input = input_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L6(0.0) else L6(timeout);
  L6(timeout_orDefault):
    st timeout = timeout_orDefault;
    tempfile = ldf tempfile;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r4 = dyn tempfile("xshell");
    check L10() else D1();
  D1():
    deopt 3 [r4];
  L10():
    st outfile = r4;
    tempfile1 = ldf tempfile;
    check L11() else D2();
  D2():
    deopt 6 [];
  L11():
    r5 = dyn tempfile1("xshell");
    check L12() else D3();
  D3():
    deopt 8 [r5];
  L12():
    st errfile = r5;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L7():
    system2 = ldf system2;
    check L15() else D4();
  L13():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<lang unlink(c(outfile, errfile))>);
    goto L7();
  L14():
    r6 = dyn base(<lang unlink(c(outfile, errfile))>);
    goto L7();
  D4():
    deopt 14 [];
  L15():
    p2 = prom<V +>{
      command1 = ld command;
      command2 = force? command1;
      checkMissing(command2);
      return command2;
    };
    p3 = prom<V +>{
      args1 = ld args;
      args2 = force? args1;
      checkMissing(args2);
      return args2;
    };
    p4 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    p5 = prom<V +>{
      outfile = ld outfile;
      outfile1 = force? outfile;
      checkMissing(outfile1);
      return outfile1;
    };
    p6 = prom<V +>{
      errfile = ld errfile;
      errfile1 = force? errfile;
      checkMissing(errfile1);
      return errfile1;
    };
    p7 = prom<V +>{
      stdin1 = ld stdin;
      stdin2 = force? stdin1;
      checkMissing(stdin2);
      return stdin2;
    };
    p8 = prom<V +>{
      input1 = ld input;
      input2 = force? input1;
      checkMissing(input2);
      return input2;
    };
    p9 = prom<V +>{
      timeout1 = ld timeout;
      timeout2 = force? timeout1;
      checkMissing(timeout2);
      return timeout2;
    };
    r17 = dyn system2[, , env, stdout, stderr, stdin, input, timeout](p2, p3, p4, p5, p6, p7, p8, p9);
    check L16() else D5();
  D5():
    deopt 29 [r17];
  L16():
    st status = r17;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L8(r19):
    popenv;
    return r19;
  L17():
    status = ld status;
    check L19() else D6();
  L18():
    r18 = dyn base1[status, stdout, stderr](<sym status>, <lang readLines(outfile, warn=FALSE)>, <lang readLines(errfile, warn=FALSE)>);
    goto L8(r18);
  D6():
    deopt 33 [status];
  L19():
    status1 = force? status;
    checkMissing(status1);
    readLines = ldf readLines;
    check L20() else D7();
  D7():
    deopt 37 [];
  L20():
    p10 = prom<V +>{
      outfile2 = ld outfile;
      outfile3 = force? outfile2;
      checkMissing(outfile3);
      return outfile3;
    };
    r21 = dyn readLines[, warn](p10, FALSE);
    check L21() else D8();
  D8():
    deopt 41 [r21];
  L21():
    readLines1 = ldf readLines;
    check L22() else D9();
  D9():
    deopt 44 [];
  L22():
    p11 = prom<V +>{
      errfile2 = ld errfile;
      errfile3 = force? errfile2;
      checkMissing(errfile3);
      return errfile3;
    };
    r23 = dyn readLines1[, warn](p11, FALSE);
    check L23() else D10();
  D10():
    deopt 48 [r23];
  L23():
    list = ldf list in base;
    r24 = dyn list(status1, r21, r23);
    check L24() else D11();
  D11():
    deopt 51 [r24];
  L24():
    goto L8(r24);
  }
}