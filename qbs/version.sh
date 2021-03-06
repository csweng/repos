#!/bin/bash -e

mirror="http://ftp.de.debian.org/debian"

package_name="qbs"
debian_pkg_name="${package_name}"
package_version="1.3.4+dfsg"
package_source="${debian_pkg_name}_${package_version}.orig.tar.gz"
src_dir="qbs-1.3.4"

git_repo=""
git_sha=""
reprepro_dir="q/${debian_pkg_name}"
dl_path="pool/main/${reprepro_dir}/"

debian_version="${package_version}-1"
debian_untar="${debian_pkg_name}_${debian_version}.debian.tar.xz"
debian_patch=""

jessie_version="~bpo80+20150406+1"
