#!/bin/bash

MY_PATH="$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )"

source $MY_PATH/config.inc

# set up color commands
if [ -t 1 -a -t 2 -a \( `type -t tput` = "file" \) ]; then
  _colors=`tput colors`
  if [ "$_colors" -ge 256 ]; then
    INFO () { tput setaf 33;  /bin/echo "$@"; tput sgr0; }
    OK   () { tput setaf 28;  /bin/echo "$@"; tput sgr0; }
    WARN () { tput setaf 226; /bin/echo "$@"; tput sgr0; }
    ERR  () { tput setaf 196; /bin/echo "$@"; tput sgr0; }
  else
    INFO () { tput setaf 4; /bin/echo "$@"; tput sgr0; }
    OK   () { tput setaf 2; /bin/echo "$@"; tput sgr0; }
    WARN () { tput setaf 3; /bin/echo "$@"; tput sgr0; }
    ERR  () { tput setaf 1; /bin/echo "$@"; tput sgr0; }
  fi
else
  INFO () { /bin/echo "$@"; }
  OK   () { /bin/echo "$@"; }
  WARN () { /bin/echo "$@"; }
  ERR  () { /bin/echo "$@"; }
fi


function get_web_getter() {
  # get a getter
  if [ \! -z `type -t curl` ]; then
    GET="curl --silent --location --compressed -O"
  elif [ \! -z `type -t wget` ]; then
    GET="wget --quiet"
  else
    ERR "No getter (curl/wget)"
    exit 1
  fi
  OK Getter is \"$GET\"
}

function check_for_tools() {
  INFO -n 'Tools: '
  for tool in $@; do
    EXISTS=false
    if [ ! -z `type -t $tool` ]; then
	EXISTS=true
    else
      	if [ ! -z `which pip` ]; then
          if [ ! -z "$(pip freeze | grep -i $tool)" ]; then
	    EXISTS=true
          fi
        fi
    fi

    if $EXISTS; then
      INFO -n "$tool "
    else
      WARN -n "No $tool "
    fi
  done
  OK ok.
}

function check_for_libs() {
  INFO -n 'Libs: '
  if [ "$(uname -s)" = 'Linux' ]; then
    set -- "${@/#/lib}"
  else
    set -- "${@/#/-l}"
  fi
  
  for lib in $@; do
    if [ "$(uname -s)" = 'Linux' ]; then
      OUTPUT=$(ldconfig -p | grep $lib)
    else
      OUTPUT=$((ld $lib 2>&1 | grep -v "not found") || true) 
    fi
    if [ -z "$OUTPUT" ]; then
      WARN -n "No $lib "
    else
      INFO -n "$lib "
    fi
  done
  OK ok.
}

function load_submodule() {
  INFO Load "$1"
  git submodule init $1
  git submodule sync $1
  git submodule update $1
}

function check_for() {
  if [ -z `which $1` ]
  then
    ERR "$1 binary not found. $2"
    if [ ! "non-fatal" == "$3" ]
    then
      exit 1
    fi
  fi
}

function check_for_crystal() {
  check_for "crystal" "Please see http://crystal-lang.org/docs/installation/index.html" "$1"
}

function check_for_node() {
  check_for "node" "Please see https://nodejs.org/en/download/" "$1"
}

function check_for_pypy() {
  check_for "pypy" "https://pypy.org/download.html" "$1"
}

function check_for_ant() {
  check_for "ant" "http://ant.apache.org/bindownload.cgi" "$1"
}

function check_for_graalvm() {
  if [ ! -e "$1/bin/java" ]
  then
    ERR "GraalVM not found."
    ERR "To run benchmarks on the GraalVM, please see 'implementations/graalvm/README.md'"
  fi
}


function checkout() {
  INFO "Checking out $2"
	if [[ ! -d $1 || ! -d "$1/.git" ]]
  then
    if [ ! -d $1 ]
    then
      mkdir $1
    fi
    pushd $1
    if [ $# -eq 3 ]
    then
      INFO Cloning git repository from $3
      git clone -b $3 --depth=1 $2 $1
      load_submodule    	
    else
      git init
      git config core.sparseCheckout true
      git remote add -f origin $2
      for dir in $(echo $4 | tr ";" "\n"); do
        echo "$dir" >> .git/info/sparse-checkout    
      done  
      git pull --depth=1 origin $3
      git checkout $3
      load_submodule
    fi
    popd > /dev/null
  else
    WARN $2 was already cloned, Updating
    pushd $1
    git pull origin $3
    load_submodule
    popd > /dev/null
  fi
}

function update_git_repo() {
  if [ -d $1 ]
  then
    pushd $1
    INFO Updating git repository: $reponame
    
    git fetch
    output=`git status -uno | grep "behind" || echo "UPDATED"`
    if [ "$output" != "UPDATED" ]
    then
      dirty=1
    else
      dirty=0
    fi
    if [ "$dirty" -eq 1 ]
    then
      if [ -z "$2" ]
      then
        git pull origin $branchname
      else
        git checkout "$2"
      fi    
      INFO Updating submodules
      load_submodule
    fi
    popd > /dev/null
    OK done
  fi
} 

function find_and_link() {
  INFO "$2 is still not linked, linking..." 
  dir=${!1}
  if [ -d $dir ]
  then
    app_dir=$dir    
  else
    INFO "${1} env variable not set in config.inc or its pointing to a wrong directory, let's try the $2 directories in your os"
    look_in_and_choose "$HOME" $2 $3
  fi
  if [ ! -z $app_dir ]
  then
    if [ -L $2 ]
    then
      rm $2
    fi
    INFO "Linking $2 to $app_dir"
    `ln -s $app_dir $2`
    OK done
  else
    WARN "$2 was not linked in $PWD, experiments will failed! Please go to config.inc and fill the directory in the corresponding variable"
  fi
}

function look_in_and_choose() {
  #output=`find "$1" -d -iname $2`
  output=$3
  vars= IFS=' ' read -r -a options <<< "$output"
  PS3='Please enter your choice: '
  installed=`which $2`
  select opt in "${options[@]}" "$installed" "Quit" 
  do
      if [ $opt = "Quit" ]
      then
        break;
      else 
        app_dir=$opt
        break
      fi
  done
}

function download_file {
  if [ ! -f $1 ]
  then
    get_web_getter 
    $GET $2
  fi
}

function download_zip {
  download_file $1 $2
  unzip $1
  rm $1
}

function buildBench {
  INFO Building $1 Benchmarks
  pushd $2
  $3
  popd > /dev/null
  OK $1 Benchmarks Build Completed. 
  
} 

get_container_version() {
  curl -s ${DOCKER_CONTAINER_URL} | ruby -e 'require("json"); puts JSON.parse(ARGF.read)["digest"]'
}

timestamp() {
  date "+%Y%m%d-%H%M"
}

pushd () {
    command pushd "$@" > /dev/null
}

popd () {
    command popd "$@" > /dev/null
}
