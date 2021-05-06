
node "server1.example.com" {

	file { '/etc/yum.repos.d/local.repo':
		ensure => "file",
		owner => "root",
		group => "wheel",
		mode => "644",
		content => "[localc7]
name=CentOS 7 Local
baseurl=http://192.168.56.220/centos7
gpgcheck=0
enabled=1
"}

}
