fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3727699908;
    st `.install.macbinary` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3727699908(pkgs, lib, repos, contriburl, method, available, destdir, dependencies, lock, quiet, `...`) {
  (reg pkgs:*, reg lib:*, reg repos:*, reg contriburl:*, reg method:*, reg available:*, reg destdir:*, reg dependencies:*, reg lock:*, reg quiet:*, reg ddd:dots) -+> V { var pkgs:*, var lib:*, var repos:*, reg repos_isMissing:L, reg repos_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var contriburl:*, reg contriburl_isMissing:L, reg contriburl_orDefault:*, reg contrib_url:cls, reg repos1:*, reg repos2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var method:*, var available:*, reg available_isMissing:L, reg available_orDefault:*, var destdir:*, reg destdir_isMissing:L, reg destdir_orDefault:*, var dependencies:*, reg dependencies_isMissing:L, reg dependencies_orDefault:*, var lock:*, reg lock_isMissing:L, reg lock_orDefault:*, reg getOption1:cls, reg r5:V, reg p3:p(V +), var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var `...`:dots? |
    mkenv;
    st pkgs = pkgs;
    st lib = lib;
    repos_isMissing = missing.0(repos);
    if repos_isMissing then L0() else L1(repos);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("repos");
      return r;
    };
    goto L1(p);
  L1(repos_orDefault):
    st repos = repos_orDefault;
    contriburl_isMissing = missing.0(contriburl);
    if contriburl_isMissing then L2() else L3(contriburl);
  L2():
    p2 = prom<V +>{
      contrib_url = ldf `contrib.url`;
      p1 = prom<V +>{
        repos1 = ld repos;
        repos2 = force? repos1;
        checkMissing(repos2);
        return repos2;
      };
      r3 = dyn contrib_url[, type](p1, "mac.binary");
      return r3;
    };
    goto L3(p2);
  L3(contriburl_orDefault):
    st contriburl = contriburl_orDefault;
    st method = method;
    available_isMissing = missing.0(available);
    if available_isMissing then L4(NULL) else L4(available);
  L4(available_orDefault):
    st available = available_orDefault;
    destdir_isMissing = missing.0(destdir);
    if destdir_isMissing then L5(NULL) else L5(destdir);
  L5(destdir_orDefault):
    st destdir = destdir_orDefault;
    dependencies_isMissing = missing.0(dependencies);
    if dependencies_isMissing then L6(FALSE) else L6(dependencies);
  L6(dependencies_orDefault):
    st dependencies = dependencies_orDefault;
    lock_isMissing = missing.0(lock);
    if lock_isMissing then L7() else L8(lock);
  L7():
    p3 = prom<V +>{
      getOption1 = ldf getOption;
      r5 = dyn getOption1("install.lock", FALSE);
      return r5;
    };
    goto L8(p3);
  L8(lock_orDefault):
    st lock = lock_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L9(FALSE) else L9(quiet);
  L9(quiet_orDefault):
    st quiet = quiet_orDefault;
    st `...` = ddd;
    popenv;
    return NULL;
  }
}