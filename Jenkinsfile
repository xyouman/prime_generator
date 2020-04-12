pipeline {
    agent { docker { image 'python:3.5.1' } }
    stages {
        stage('deploy') {
            steps {
                retry(3) {
                    bat echo 'run makefile'
                }
            }
        }
    }
}